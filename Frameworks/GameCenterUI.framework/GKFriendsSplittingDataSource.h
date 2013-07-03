/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSSet, GKFriendsDataSource, GKGame, NSMutableArray, NSString, NSMutableDictionary, NSArray;

@interface GKFriendsSplittingDataSource : GKSplittingDataSource  {
    GKGame *_game;
    NSString *_achievementID;
    NSString *_leaderboardID;
    NSSet *_hiddenPlayers;
    int _maxSelectable;
    NSMutableDictionary *_pickerInfos;
    NSMutableArray *_currentSelectedPlayerIDs;
}

@property(retain) GKFriendsDataSource * friendsDataSource;
@property(retain) GKGame * game;
@property(retain) NSString * achievementID;
@property(retain) NSString * leaderboardID;
@property(retain) NSSet * hiddenPlayers;
@property(retain) NSArray * selectedPlayerIDs;
@property(readonly) NSArray * selectedPlayers;
@property int maxSelectable;
@property(retain) NSMutableDictionary * pickerInfos;
@property(retain) NSMutableArray * currentSelectedPlayerIDs;


- (void)setCurrentSelectedPlayerIDs:(id)arg1;
- (id)currentSelectedPlayerIDs;
- (void)setPickerInfos:(id)arg1;
- (id)pickerInfos;
- (void)setLeaderboardID:(id)arg1;
- (id)leaderboardID;
- (void)setAchievementID:(id)arg1;
- (id)achievementID;
- (id)friendsDataSource;
- (id)collectionView:(id)arg1 forPickerInfo:(id)arg2 forIndexPath:(id)arg3;
- (void)updatePickerInfosFromFriendPlayersOfGame:(id)arg1 outputPlayerIDs:(id*)arg2;
- (void)loadGamePlayersWithUpdateNotifier:(id)arg1;
- (void)loadRanksWithUpdateNotifier:(id)arg1;
- (void)loadAchievedWithUpdateNotifier:(id)arg1;
- (void)updatePickerInfosFromPlayers:(id)arg1;
- (void)toggleSelectionForPlayerID:(id)arg1;
- (id)allPickerInfos;
- (BOOL)canSelectPlayerInfo:(id)arg1;
- (id)indexPathsForPlayerID:(id)arg1;
- (void)notifyPickerItemsChanged:(id)arg1;
- (id)playerInfoForPlayerID:(id)arg1;
- (id)hiddenPlayers;
- (void)setHiddenPlayers:(id)arg1;
- (void)setSelectedPlayerIDs:(id)arg1;
- (void)setFriendsDataSource:(id)arg1;
- (int)maxSelectable;
- (id)selectedPlayers;
- (void)toggleSelectionAtIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (id)selectedPlayerIDs;
- (void)refreshSelectionState;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)setMaxSelectable:(int)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)configureDataSource;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)setGame:(id)arg1;
- (id)game;
- (id)init;
- (void)dealloc;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end