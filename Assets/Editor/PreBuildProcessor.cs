using System.IO;
using UnityEngine;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Callbacks;
//using UnityEditor.Build.Reporting;


[InitializeOnLoad]
public static class PlayModeStateChangedExample
{
    static string[] TARGET_DIRECTORY_PATH = new string[] 
    {
        "D:/Home/WebRTC/UnityPlugin/libwebrtc/src/out/x64win/webrtc_unity_plugin.dll",
        "D:/Home/WebRTC/UnityPlugin/libwebrtc/src/out/x64win/webrtc_unity_plugin.dll.lib",
        "D:/Home/WebRTC/UnityPlugin/libwebrtc/src/out/x64win/webrtc_unity_plugin.dll.pdb"
    };
    static string[] DESTINATION_DIRECTORY_PATH = new string[] 
    {
        "D:/Home/WebRTC/UnityPlugin/UnityProject/webrtcWinTest/Assets/Plugins/x86_64/WebRTC/webrtc_unity_plugin.dll",
        "D:/Home/WebRTC/UnityPlugin/UnityProject/webrtcWinTest/Assets/Plugins/x86_64/WebRTC/webrtc_unity_plugin.dll.lib",
        "D:/Home/WebRTC/UnityPlugin/UnityProject/webrtcWinTest/Assets/Plugins/x86_64/WebRTC/webrtc_unity_plugin.dll.pdb"
    };

    static PlayModeStateChangedExample()
    {
        EditorApplication.playModeStateChanged += OnChangedPlayMode;
    }
    private static void OnChangedPlayMode(PlayModeStateChange state)
    {

        if (state == PlayModeStateChange.ExitingEditMode)
        {
            for (int i = 0; i < 3; i += 1)
            {
//                File.Copy(TARGET_DIRECTORY_PATH[i], DESTINATION_DIRECTORY_PATH[i], overwrite: true);
            }
        }
        else if (state == PlayModeStateChange.EnteredPlayMode)
        {
        }
        else if (state == PlayModeStateChange.ExitingPlayMode)
        {
        }
        else if (state == PlayModeStateChange.EnteredEditMode)
        {
        } else
        {
        }

    }

}










/*








/// <summary>
/// ビルド時にResourcesにある特定のフォルダを自動で退けるクラス
/// </summary>
public class ResourcesAutoEvacuator : IPreprocessBuildWithReport
{

    //移動するディレクトリのパスと、移動先のディレクトリのパス
    private const string TARGET_DIRECTORY_PATH = "D:/Home/WebRTC/UnityPlugin/libwebrtc/src/out/x64win/webrtc_unity_plugin.dll";
    private const string DESTINATION_DIRECTORY_PATH = "D:/Home/WebRTC/UnityPlugin/UnityProject/webrtcWinTest/Assets/Plugins/x86_64/WebRTC/webrtc_unity_plugin.dll";

//    private const string TARGET_DIRECTORY_PATH = "D:\Home\WebRTC\UnityPlugin\libwebrtc\src\out\x64win\webrtc_unity_plugin.dll";
//    private const string DESTINATION_DIRECTORY_PATH = "D:\Home\WebRTC\UnityPlugin\UnityProject\webrtcWinTest\Assets\Plugins\x86_64\WebRTC\webrtc_unity_plugin.dll";


    public void OnPreprocessBuild(BuildReport report)
    {
        //ディレクトリを移動
        Debug.Log("do pre buid pros");
        Directory.Move(TARGET_DIRECTORY_PATH, DESTINATION_DIRECTORY_PATH);
    }

    public int callbackOrder { get { return 0; } }

}


 */










