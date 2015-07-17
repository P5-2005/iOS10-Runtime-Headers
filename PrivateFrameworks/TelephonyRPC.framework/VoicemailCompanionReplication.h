/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface VoicemailCompanionReplication : NSObject <PSYSyncCoordinatorDelegate, SYStoreDelegate> {
    NSObject<OS_dispatch_queue> *_companionSyncQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    PSYSyncCoordinator *_coordinator;
    BOOL _didSuspendCompanionSyncQueue;
    NPSDomainAccessor *_domainAccessor;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _domainAccessorMutexLock;
    NanoTelephonyIDSProxy *_proxy;
    SYStore *_syncStore;
    NSMutableArray *_vmAfterSyncComplete;
    NSObject<OS_dispatch_semaphore> *vmdIsReadySemaphore;
    NSObject<OS_dispatch_semaphore> *waitForFirstSyncCompleteSemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SYStore *syncStore;

- (void).cxx_destruct;
- (void)_deltaSync;
- (void)_handleVoicemailDataAvailableNotification:(id)arg1;
- (void)_handleVoicemailFlagsChanged:(id)arg1;
- (void)_handleVoicemailServiceRecordsAdded:(id)arg1;
- (void)_handleVoicemailStoreChanged:(id)arg1;
- (void)_handleVoicemailStoreRemovedAllVoicemails:(id)arg1;
- (void)_handleVoicemailStoreRemovedVoicemails:(id)arg1;
- (void)_initializeDomainAccessor;
- (void)_performAfterFirstDeviceUnlockAndSyncRestrictionNone:(id /* block */)arg1;
- (void)_registerForNotifications;
- (void)addToRemoteVoicemails:(id)arg1;
- (id /* block */)beginSyncingAllObjectsForStore:(id)arg1;
- (id)changeSetForRemoteVoicemails:(id)arg1 fromVMVoicemails:(id)arg2;
- (void)dealloc;
- (int)indexOfVoicemail:(id)arg1 inArray:(id)arg2;
- (id)initWithIDSProxy:(id)arg1;
- (id)listOfVoicemailsToSync;
- (int)maxVoicemailCount;
- (int)maxVoicemailTotalBytes;
- (id)remoteVoicemails;
- (void)removeFromRemoteVoicemails:(id)arg1;
- (void)setRemoteVoicemails:(id)arg1;
- (void)setSyncStore:(id)arg1;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
- (id)syncStore;
- (void)syncStore:(id)arg1 encounteredErrorInFullSync:(id)arg2;
- (void)syncStore:(id)arg1 objectAdded:(id)arg2;
- (void)syncStore:(id)arg1 objectDeleted:(id)arg2;
- (void)syncStore:(id)arg1 objectUpdated:(id)arg2;
- (id)syncStoreAllObjects:(id)arg1;
- (void)syncStoreAllObjectsDeleted:(id)arg1;
- (id)syncStoreAtIndexes:(id)arg1;
- (void)syncStoreDidCompleteFullSync:(id)arg1;
- (void)syncStoreDidUpdate:(id)arg1;
- (void)syncStoreEnqueuedAllFullSyncMessages:(id)arg1 context:(id)arg2;
- (void)syncStoreWillUpdate:(id)arg1;
- (id)voicemailChangeSetFrom:(id)arg1;
- (void)waitForVMDToBeUpAndRunning;

@end