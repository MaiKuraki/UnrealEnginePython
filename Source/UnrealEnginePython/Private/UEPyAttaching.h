#pragma once



#include "UnrealEnginePython.h"

PyObject *py_ue_get_socket_location(ue_PyUObject *, PyObject *);
PyObject *py_ue_get_socket_rotation(ue_PyUObject *, PyObject *);
PyObject *py_ue_get_socket_transform(ue_PyUObject *, PyObject *);
PyObject *py_ue_get_socket_world_transform(ue_PyUObject *, PyObject *);
PyObject *py_ue_get_socket_actor_transform(ue_PyUObject *, PyObject *);