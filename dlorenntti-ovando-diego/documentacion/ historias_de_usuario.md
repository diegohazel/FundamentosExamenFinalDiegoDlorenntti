# Sistema de Alquiler de Bicicletas EcoMovil


## Introducción

### Descripción general del sistema
Sistema para gestionar alquileres urbanos de bicicletas que permitan registrar clientes, controlar el tiempo de uso y calcular costos automáticamente.

### Objetivo General
Automatizar el proceso de alquiler de bicicletas para mejorar la eficiencia y experiencia del usuario.

### Objetivos específicos
1.Gestionar información de clientes
2.Controlar el proceso de alquiler
3.Administrar el inventario de bicicletas
---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 1:  Gestión de Clientes

HU1.1: Como administrador, quiero registrar nuevos clientes con sus datos básicos para llevar un control de quienes usan el servicio.
Criterios de aceptación:

El sistema guarda nombre, Carnets de Identidad y teléfono correctamente

Si el Carnet de Identidad ya existe, muestra mensaje "Cliente ya registrado"

HU1.2: Como empleado, quiero buscar clientes por sus Carnets para ver su información rápido.
Criterios de aceptación:

Muestra los datos del cliente si existe

Si no existe, muestra "Cliente no encontrado"

HU1.3: Como cliente, quiero actualizar mi número de teléfono por si lo cambio.
Criterios de aceptación:

Permite editar solo el campo de teléfono

Guarda los cambios correctamente

HU1.4: Como gerente, quiero ver qué clientes tienen alquileres activos.
Criterios de aceptación:

Muestra lista de clientes con bicis alquiladas

Indica cuánto tiempo llevan con la bici

HU1.5: Como sistema, quiero bloquear clientes con pagos pendientes.
Criterios de aceptación:

No deja alquilar si tiene deuda

Muestra mensaje "Regularice su pago para continuar"

HU1.6: Como administrador, quiero eliminar clientes inactivos por más de 1 año.
Criterios de aceptación:

Pide confirmación antes de borrar

Elimina solo si no tiene alquileres pendientes



---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 2: Proceso de Alquiler

HU2.1: Como cliente, quiero ver qué bicicletas están disponibles ahora.
Criterios de aceptación:

Muestra lista de bicis libres

Indica ubicación de cada una

HU2.2: Como sistema, quiero registrar cuando se toma una bici.
Criterios de aceptación:

Guarda hora exacta de inicio

Cambia estado de bici a "ocupad"

HU2.3: Como empleado, quiero registrar la devolución de una bici.
Criterios de aceptación:

Calcula tiempo de uso automáticamente

Muestra costo que hay que pagar

HU2.4: Como cliente, quiero saber cuánto debo pagar por el tiempo usado.
Criterios de aceptación:

Calcula correctamente según tarifa por hora

Muestra total en pantalla

HU2.5: Como sistema, quiero generar un recibo simple del alquiler.
Criterios de aceptación:

Muestra tiempo, costo y datos básicos

Opción para imprimir o enviar por email

HU2.6: Como cliente, quiero pagar con tarjeta directamente en el sistema.
Criterios de aceptación:

Valida datos de tarjeta

Confirmar pago recibido

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 3 : administracion de bicicletas

HU3.1: Como técnico, quiero agregar nuevas bicis al sistema.
Criterios de aceptación:

Asigna número identificador único

Guarda modelo y ubicación

HU3.2: Como administrador, quiero dar de baja bicis dañadas.
Criterios de aceptación:

Pide motivo de baja

No permite borrar si está alquilada

HU3.3: Como empleado, quiero ver reporte de bicis en mantenimiento.
Criterios de aceptación:

Muestra lista filtrada

Indica fecha de ingreso a taller

HU3.4: Como sistema, quiero alertar cuando una bici lleva mucho tiempo sin uso.
Criterios de aceptación:

Marca bicis con más de 30 días inactivas

Sugiere revisión técnica

HU3.5: Como gerente, quiero cambiar las tarifas según temporada.
Criterios de aceptación:

Permite ajustar precio por hora

Los cambios aplican para nuevos alquileres

HU3.6: Como empleado, quiero buscar bicis por número o modelo.
Criterios de aceptación:

Filtra resultados al escribir

Muestra estado actual de cada bici
