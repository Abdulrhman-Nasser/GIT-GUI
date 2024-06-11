### README for Git GUI Management System

---

# Git GUI Management System

## Overview
This project is a Git GUI Management System developed using Qt. It provides a user-friendly interface for managing local and global Git repositories. The system offers various functionalities to streamline Git operations, making it easier for users to interact with their repositories through a graphical interface.

## Features
- **Initial Setup:**
  - Choose the file/directory to work with.
  - Set your name and email for Git configuration.
  - Clone a repository by pasting the URL into the provided text line.
  - Automatic project directory selection if none is chosen initially.
  - Initialize a Git repository if one does not exist in the chosen path.

- **Repository Management:**
  - **Status:** View the status of files within the repository.
  - **Logs:** Display the commit history of the repository.
  - **Track/Untrack Files:** Add files to tracking (git add) or remove them from tracking.
  - **Differences:** View the differences between files.
  - **Commits:** Add commits with comments to the repository.
  - **Branch Management:** Create, delete, and switch between branches (git checkout).
  - **Online Repository Management:**
    - Set an alias for an online GitHub repository URL.
    - Rename or delete the alias.
    - Fetch the online repository.
    - Pull branches from the online repository.
    - Push branches to the online repository.
    - Merge branches.

- **Window Management:**
  - Clear the window to clean up the view.
  - Navigate back to the initial setup window.

## Components
- Qt-based GUI application
- Integration with local and global Git repositories

## Setup and Installation
1. **Software Setup:**
   - Install Qt and set up the development environment.
   - Ensure Git is installed on your system and properly configured.
   - Clone this repository:
     ```bash
     git clone https://github.com/yourusername/git-gui-management-system.git
     ```
   - Open the Qt project file in Qt Creator.
   - Build and run the project.

## Usage
1. Launch the Qt application.
2. On the initial setup window:
   - Choose the file/directory to work with.
   - Set your name and email for Git configuration.
   - Clone a repository by pasting the URL.
   - Press "Start" to proceed.
3. If a Git repository is not initialized, it will be automatically initialized.
4. Use the various functionalities to manage your repository:
   - View the status and logs of your repository.
   - Track and untrack files.
   - View differences between files.
   - Add commits with comments.
   - Create, delete, and switch branches.
   - Manage online repositories by setting aliases, fetching, pulling, pushing, and merging branches.
5. Clear the window to clean up the view or go back to the initial setup window as needed.

## Contributing
Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.
