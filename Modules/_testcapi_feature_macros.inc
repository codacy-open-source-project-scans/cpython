// Generated by Tools/build/stable_abi.py

// Add an entry in dict `result` for each Stable ABI feature macro.

#ifdef HAVE_FORK
    res = PyDict_SetItemString(result, "HAVE_FORK", Py_True);
#else
    res = PyDict_SetItemString(result, "HAVE_FORK", Py_False);
#endif
if (res) {
    Py_DECREF(result); return NULL;
}

#ifdef MS_WINDOWS
    res = PyDict_SetItemString(result, "MS_WINDOWS", Py_True);
#else
    res = PyDict_SetItemString(result, "MS_WINDOWS", Py_False);
#endif
if (res) {
    Py_DECREF(result); return NULL;
}

#ifdef PY_HAVE_THREAD_NATIVE_ID
    res = PyDict_SetItemString(result, "PY_HAVE_THREAD_NATIVE_ID", Py_True);
#else
    res = PyDict_SetItemString(result, "PY_HAVE_THREAD_NATIVE_ID", Py_False);
#endif
if (res) {
    Py_DECREF(result); return NULL;
}

#ifdef Py_REF_DEBUG
    res = PyDict_SetItemString(result, "Py_REF_DEBUG", Py_True);
#else
    res = PyDict_SetItemString(result, "Py_REF_DEBUG", Py_False);
#endif
if (res) {
    Py_DECREF(result); return NULL;
}

#ifdef Py_TRACE_REFS
    res = PyDict_SetItemString(result, "Py_TRACE_REFS", Py_True);
#else
    res = PyDict_SetItemString(result, "Py_TRACE_REFS", Py_False);
#endif
if (res) {
    Py_DECREF(result); return NULL;
}

#ifdef USE_STACKCHECK
    res = PyDict_SetItemString(result, "USE_STACKCHECK", Py_True);
#else
    res = PyDict_SetItemString(result, "USE_STACKCHECK", Py_False);
#endif
if (res) {
    Py_DECREF(result); return NULL;
}

