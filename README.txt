# OG Privacy CTPlus
This feature provides you with the ability to make projects and tasks private inside Open atrium groups with ct_plus (http://drupal.org/project/ct_plus).  It also allows you to give access to users outside of the group to view and comment on a task or project.

# Here are some features:

- Set project as private | This will prevent members of the project's group to see the project or any of tasks associated with it.
- Set task as private | This will prevent members of the task's group to see the task
- Set Project managers | uses userreference to assign project managers to a project.  These users have access to the project (even if they aren't members of the group) and to all the tasks associated with it, even if the tasks are marked as private.
- Set additional users | uses userreference to assign permissions to a project or task even if they aren't members of the group.  If used on a project node, those users will be able to see all tasks under the project unless those tasks are set as private.  If used on a task they will be able to view and comment on the task.

# Simple example use case: 

You have a group called "Franks Deli".  You want to create a project and manage it under that group but don't want some of the group members (clients) to see your discussion.  You create a project and make it private, set your developers as project managers or additional users.

The clients wont even know that project exists but you can communicate with your developers seemlessly.



## Installation

Be sure you have CTPlus and og_privacy_atrium installed.  Enable this feature and create a group with the "CTPlus - Private group" space.


Initial notes to self/todo's:
- need to test "additional users" assigned on project if project is set to private.
- hide the extra fields if space isn't "CTPlus - Private group"

