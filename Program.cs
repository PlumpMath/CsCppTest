using System.Runtime.InteropServices;

public class Program {

    // Import user32.dll (containing the function we need) and define
    // the method corresponding to the native function.
    [DllImport("anvil.dll")]
    public static extern void Initialize();

    public static void Main(string[] args) {
        // Invoke the function as a regular managed method.
        Initialize();
    }
}