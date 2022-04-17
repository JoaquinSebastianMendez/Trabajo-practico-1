/// @brief Funcion que pide numero
///
/// @param mensaje
/// @return numero
float pedirNumero(char mensaje[]);


/// @brief funcion que calcula el precio con la tarjeta de debito en aereolineas
///
/// @param y
/// @return precioDescuento
float CalcularTarjetaDebitoAereolineas(float y);


/// @brief funcion que calcula precio con la tarjeta de debito en LATAM
///
/// @param z
/// @return precioDescuento
float CalcularTarjetaDebitoLatam(float z);


/// @brief funcion que calcula el precio con la tarjeta de credito en Aereolineas
///
/// @param y
/// @return precioAumento
float CalcularTarjetaCreditoAereolineas(float y);


/// @brief funcion que calcula el precio con la tarjeta de credito en Aereolineas
///
/// @param z
/// @return precioAumento
float CalcularTarjetaCreditoLatam(float z);


/// @brief funcion que calcula el precio mediante BITCOIN para Aereolineas
///
/// @param y
/// @return precioConBitcoin
float CalcularPrecioBitcoinAereolineas(float y);

/// @brief funcion que calcula el precio mediante Bitcoin para LATAM
///
/// @param z
/// @return precioConBitcoin;
float CalcularPrecioBitcoinLatam(float z);


/// @brief funcion que calcula el precio unitario para Aereolineas
///
/// @param km
/// @param y
/// @return precioUnitario
float CalcularPrecioUnitarioAereolineas(float km , float y);

/// @brief funcion que calcula el precio unitario para Latam
///
/// @param km
/// @param z
/// @return precioUnitario
float CalcularPrecioUnitarioLatam(float km , float z);


