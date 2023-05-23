# Consigna

Desarrolle la clase “Medicion” para que el código “main” provisto al pie sea válido. Los objetos de la
clase “Medicion” almacenan el valor de una medición en flotante y su unidad de medida como cadena de caracteres. Las mediciones se pueden sumar siempre y cuando su unidad de medida sea
la misma, caso contrario la operación no es permitida. También es posible, como se indica en el
código al pie restar a un flotante la “Medicion”. En este caso no es importante la unidad de medida
ya que existe una sola. Use efectivamente el tiempo y no desarrolle nada que no aplique al código
mostrado.

__Nota__: Un item mas que se le puede agregar es crear una Exception personalizada para capturar en el "catch" si hay un error por parte de un objeto "Medicion" llamada
"MedicionExc"

```Cpp
Medicion m1mv(100.0, "Mv");
Medicion m2mv(20.0, "Mv");
Medicion m4amp(3.0, "Amp");

Medicion m3mv = m1mv + m2mv;

cout << "Resultdo 1: " << 180.0 - m3mv << endl;

try
{
  cout << m3mv + m4amp << endl;
}catch(...)
{
  cout << "No se pueden sumar mediciones de distintas unidades de medidas" << endl;
}

cout << "\n\n" << endl;
```
