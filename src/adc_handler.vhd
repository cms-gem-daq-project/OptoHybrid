library ieee;
use ieee.std_logic_1164.all;

library work;
use work.user_package.all;

entity adc_handler is
port(

    fabric_clk_i    : in std_logic;
    reset_i         : in std_logic;
    
    uart_rx_i       : in std_logic;

    wbus_o          : out array32(1 downto 0);
    wbus_t          : out std_logic_vector(1 downto 0)

);
end adc_handler;

architecture Behavioral of adc_handler is

    -- UART
    
    signal uart_en      : std_logic := '0';
    signal uart_data    : std_logic_vector(7 downto 0) := (others => '0');

begin

    uart_rx_inst : entity work.uart_rx
    port map(
        fabric_clk_i    => fabric_clk_i,
        reset_i         => reset_i,
        uart_rx_i       => uart_rx_i,
        en_o            => uart_en,
        data_o          => uart_data
    );
    
    adc_switch_inst : entity work.adc_switch
    port map(
        fabric_clk_i    => fabric_clk_i,
        reset_i         => reset_i,
        uart_en_i       => uart_en,
        uart_data_i     => uart_data,
        wbus_o          => wbus_o,
        wbus_t          => wbus_t
    );

end Behavioral;
