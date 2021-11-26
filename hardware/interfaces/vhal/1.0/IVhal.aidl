// IRemoteService.aidl
package android.hardware.vhal@1.0;

// Declare any non-default types here with import statements

/** Example service interface */
interface IRemoteService {
    /** Request the process init*/
    void init();

    /** Demonstrates some basic types that you can use as parameters
     * and return values in AIDL.
     */
    void setMode(int mode);
}
