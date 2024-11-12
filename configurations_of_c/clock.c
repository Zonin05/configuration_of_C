using System;
using System.Timers;

class SimpleClock
{
    private static Timer timer;

    static void Main()
    {
        Console.WriteLine("Clock Program");
        
        timer = new Timer(1000);
        timer.Elapsed += OnTimedEvent;
        timer.AutoReset = true;
        timer.Enabled = true;

        Console.WriteLine("Press [Enter] to exit the clock.");
        Console.ReadLine();
    }

    private static void OnTimedEvent(Object source, ElapsedEventArgs e)
    {
        DateTime currentTime = DateTime.Now;
        Console.Clear();
        Console.WriteLine("Current Time: " + currentTime.ToString("HH:mm:ss"));
    }
}
