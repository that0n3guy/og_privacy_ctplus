# OG Privacy for Open Atrium
This feature provides fine-grained node permissions for Open Atrium-based sites.

It works by adding a Mark-based widget to node in non-private groups. If left unchecked, the node will be private. This means 
that current, default behavior requires this box to be **checked on**.

A new field has been added to group nodes (editable in Group settings) called "Per Node Privacy Settings". if left as default, 
*Use Group Settings*, there will be no change for that group in behavior or UI from Open Atrium's standard behavior. The other 
two options in this drop-down sets the default for whether nodes will be marked public or private on the form for new nodes.

## Installation

In addition to all standing requirements for og_privacy_atrium, you must use a patched version of the Mark module.

http://drupal.org/files/issues/mark.868764-5.patch

Apply this patch by downloading it to the directory of the Mark module, and, from within that directory, running:

`> patch < mark.868764-4.patch`

This patch adds the node form widget functionality to Mark.

