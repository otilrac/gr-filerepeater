/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(flowsync.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(7fd5c00d442eb128cf857f7c431872e8)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <filerepeater/flowsync.h>
// pydoc.h is automatically generated in the build directory
#include <flowsync_pydoc.h>

void bind_flowsync(py::module& m)
{

    using flowsync    = ::gr::filerepeater::flowsync;


    py::class_<flowsync, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<flowsync>>(m, "flowsync", D(flowsync))

        .def(py::init(&flowsync::make),
           py::arg("datasize"),
           py::arg("nconnections"),
           D(flowsync,make)
        )
        



        ;




}







