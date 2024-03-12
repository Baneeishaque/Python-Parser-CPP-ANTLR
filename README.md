Taken from [ANTLR Parsing and C++, Part 2: Building a Python Parser](https://www.codeproject.com/Articles/5309206/ANTLR-Parsing-and-Cplusplus-Part-2-Building-a-Pyth)

---

Run a Visual Studio project from the command line by following these steps:

1. Open Developer Command Prompt for VS 2022.
2. Navigate to your solution folder.
3. Build your project with the following command:
    ```
    msbuild myproject.sln /p:Configuration=Release
    ```
    Replace `myproject.sln` with the name of your solution file and `Release` with the configuration you want to build¹.
4. Navigate to the output directory, which is usually in the `bin\Release` or `bin\Debug` subfolder of your project folder¹.
5. Run your project's executable¹.

Here is an example of the commands you might use:
```cmd
cd path\to\your\solution\folder
msbuild myproject.sln /p:Configuration=Release
cd myproject\bin\Release
myproject.exe
```
Replace `path\to\your\solution\folder` with the path to your solution folder, `myproject.sln` with the name of your solution file, `myproject` with the name of your project folder, and `myproject.exe` with the name of your project's executable¹.

Please note that you need to have MSBuild installed on your machine and added to your system's PATH. MSBuild is included with the .NET Framework, so if you have the .NET Framework installed, you should have MSBuild as well³. If you're using Visual Studio 2019, the path to MSBuild might be something like `C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\MSBuild\Current\Bin`².

Source: Conversation with Bing, 12/3/2024
1. [command line - Run a solution from Visual Studio console without ....](https://stackoverflow.com/questions/15754302/run-a-solution-from-visual-studio-console-without-opening-the-ide)
2. [How do I compile a Visual Studio project from the command-line?](https://stackoverflow.com/questions/498106/how-do-i-compile-a-visual-studio-project-from-the-command-line)
3. [Starting Visual Studio from a command prompt - Stack Overflow](https://stackoverflow.com/questions/973561/starting-visual-studio-from-a-command-prompt)
