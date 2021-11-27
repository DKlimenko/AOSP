// IRemoteService.aidl
package android.hardware.vhalcustom;

// Declare any non-default types here with import statements

/** Example service interface */
interface IVhal {
    /** Request the process init*/
    void init();

    /** Demonstrates some basic types that you can use as parameters
     * and return values in AIDL.
     */
    void setMode(int mode);
}
