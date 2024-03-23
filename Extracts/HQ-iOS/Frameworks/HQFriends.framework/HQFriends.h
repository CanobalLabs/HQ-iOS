//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

#pragma mark -

//
// File: Payload/HQ-iOS.app/Frameworks/HQFriends.framework/HQFriends
// UUID: F371FD70-8A2C-3E7A-80ED-B18DE6610803
//
//                           Arch: arm64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 0.0.0.0.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: /usr/lib/swift
//                               = /usr/lib/swift
//                       Run path: @executable_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/HQFriends.framework/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/HQFriends.framework/Frameworks
//                       Run path: @executable_path/../../Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/HQFriends.framework/../../Frameworks
//                       Run path: @executable_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/HQFriends.framework/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/HQFriends.framework/Frameworks
//

@protocol MFMailComposeViewControllerDelegate <NSObject>

@optional
- (void)mailComposeController:(MFMailComposeViewController *)arg1 didFinishWithResult:(long long)arg2 error:(NSError *)arg3;
@end

@protocol MFMessageComposeViewControllerDelegate <NSObject>
- (void)messageComposeViewController:(MFMessageComposeViewController *)arg1 didFinishWithResult:(long long)arg2;
@end

@protocol NSObject
@property(nonatomic, readonly) NSString *description;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
@property(nonatomic, readonly) Class superclass;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;

@optional
@property(nonatomic, readonly) NSString *debugDescription;
@end

@protocol UIScrollViewDelegate <NSObject>

@optional
- (void)scrollViewDidChangeAdjustedContentInset:(UIScrollView *)arg1;
- (void)scrollViewDidScrollToTop:(UIScrollView *)arg1;
- (_Bool)scrollViewShouldScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (UIView *)viewForZoomingInScrollView:(UIScrollView *)arg1;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewDidZoom:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
@end

@protocol UITableViewDataSource <NSObject>
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 numberOfRowsInSection:(long long)arg2;

@optional
- (void)tableView:(UITableView *)arg1 moveRowAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (long long)tableView:(UITableView *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSArray *)sectionIndexTitlesForTableView:(UITableView *)arg1;
- (_Bool)tableView:(UITableView *)arg1 canMoveRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForFooterInSection:(long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(UITableView *)arg1;
@end

@protocol UITableViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)tableView:(UITableView *)arg1 willEndContextMenuInteractionWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)tableView:(UITableView *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (UITargetedPreview *)tableView:(UITableView *)arg1 previewForDismissingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)tableView:(UITableView *)arg1 previewForHighlightingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UIContextMenuConfiguration *)tableView:(UITableView *)arg1 contextMenuConfigurationForRowAtIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint)arg3;
- (void)tableViewDidEndMultipleSelectionInteraction:(UITableView *)arg1;
- (void)tableView:(UITableView *)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldSpringLoadRowAtIndexPath:(NSIndexPath *)arg2 withContext:(id <UISpringLoadedInteractionContext>)arg3;
- (_Bool)tableView:(UITableView *)arg1 selectionFollowsFocusForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)indexPathForPreferredFocusedViewInTableView:(UITableView *)arg1;
- (void)tableView:(UITableView *)arg1 didUpdateFocusInContext:(UITableViewFocusUpdateContext *)arg2 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg3;
- (_Bool)tableView:(UITableView *)arg1 shouldUpdateFocusInContext:(UITableViewFocusUpdateContext *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canFocusRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)tableView:(UITableView *)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)tableView:(UITableView *)arg1 shouldShowMenuForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 indentationLevelForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 targetIndexPathForMoveFromRowAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 didEndEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (UISwipeActionsConfiguration *)tableView:(UITableView *)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)arg2;
- (UISwipeActionsConfiguration *)tableView:(UITableView *)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(UITableView *)arg1 editActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 editingStyleForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didDeselectRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 willDeselectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 willSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didUnhighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didHighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 accessoryTypeForRowWithIndexPath:(NSIndexPath *)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForFooterInSection:(long long)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg2;
- (double)tableView:(UITableView *)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndDisplayingFooterView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 didEndDisplayingHeaderView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 didEndDisplayingCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayFooterView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayHeaderView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
@end

@interface _TtC9HQFriends19TitledSectionHeader : UITableViewHeaderFooterView
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: $__lazy_storage_$_titleLabel
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

@interface _TtC9HQFriendsP33_4B51329EEEE5865A8CA8B08DFF04385E11BundleClass : _TtCs12_SwiftObject
{
}

@end

@interface _TtC9HQFriends28TitledSectionHeaderViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: reuseIdentifier
    // Error parsing type: , name: title
    // Error parsing type: , name: titleColor
    // Error parsing type: , name: onUpdate
}

@end

@interface _TtC9HQFriends22SeparatorSectionFooter : UITableViewHeaderFooterView
{
    // Error parsing type: , name: $__lazy_storage_$_separator
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

@interface _TtC9HQFriends21FriendsViewController : UIViewController <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate>
{
    // Error parsing type: , name: resultsViewController
    // Error parsing type: , name: session
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: showUserPublisher
    // Error parsing type: , name: $__lazy_storage_$_searchBar
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_separator
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)onTextFieldEditingDidChangeWithSender:(id)arg1;
- (void)onTextFieldEditingDidEndWithSender:(id)arg1;
- (void)onTextFieldEditingDidBeginWithSender:(id)arg1;
- (void)onTap;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

@interface _TtC9HQFriends24ContactsSectionViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: _config
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: session
    // Error parsing type: , name: state
    // Error parsing type: , name: backingHeaderViewModel
    // Error parsing type: , name: backingCellViewModels
    // Error parsing type: , name: disposeBag
}

- (void)friendStoresUpdatedWithNotification:(id)arg1;

@end

@interface _TtC9HQFriends22ConnectAddressBookView : UIView
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: $__lazy_storage_$_loaderView
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_avatarBanner
    // Error parsing type: , name: $__lazy_storage_$_label
    // Error parsing type: , name: $__lazy_storage_$_connectButton
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onPressConnect;
- (id)initWithCoder:(id)arg1;

@end

@interface _TtC9HQFriends30FriendRequestsSectionViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: _config
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: $__lazy_storage_$_backingHeaderViewModel
    // Error parsing type: , name: backingCellViewModels
}

- (void)friendStoresUpdatedWithNotification:(id)arg1;

@end

@interface _TtC9HQFriends12LoadMoreCell : UITableViewCell
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_button
}

- (void).cxx_destruct;
- (void)onLoadMorePressed;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

@interface _TtC9HQFriends8GameInfo : _TtCs12_SwiftObject
{
    // Error parsing type: , name: currency
    // Error parsing type: , name: currentPrizeCents
    // Error parsing type: , name: currentPrizePoints
    // Error parsing type: , name: nextCheckpointIn
    // Error parsing type: , name: roundNumber
    // Error parsing type: , name: roundCount
}

@end

@interface _TtC9HQFriends22NearbySectionViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: _config
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: backingHeaderViewModel
    // Error parsing type: , name: backingCellViewModels
    // Error parsing type: , name: connections
}

- (void)load;

@end

@interface _TtC9HQFriends26ViewersContainerController : UIViewController
{
    // Error parsing type: , name: currentShow
    // Error parsing type: , name: contentViewController
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: openedFromPan
    // Error parsing type: , name: config
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_labelStackView
    // Error parsing type: , name: $__lazy_storage_$_prizeStackView
    // Error parsing type: , name: $__lazy_storage_$_prizeLabel
    // Error parsing type: , name: $__lazy_storage_$_playingCountLabel
    // Error parsing type: , name: $__lazy_storage_$_questionLabel
    // Error parsing type: , name: $__lazy_storage_$_shareAnswersSwitch
    // Error parsing type: , name: $__lazy_storage_$_separator
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

@interface _TtC9HQFriends18FriendRequestStore : _TtCs12_SwiftObject
{
    // Error parsing type: , name: friendRequests
    // Error parsing type: , name: count
    // Error parsing type: , name: resourceLoader
    // Error parsing type: , name: resourcePager
}

@end

@interface _TtC9HQFriends25FriendsContainerViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: searchPlaceholderText
    // Error parsing type: , name: onSearch
}

@end

@interface _TtC9HQFriends27ConnectAddressBookViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: reuseIdentifier
    // Error parsing type: , name: inGame
    // Error parsing type: , name: session
    // Error parsing type: , name: avatarImage
    // Error parsing type: , name: isLoading
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onComplete
    // Error parsing type: , name: disposeBag
}

@end

@interface _TtC9HQFriends11FriendStore : _TtCs12_SwiftObject
{
    // Error parsing type: , name: friends
    // Error parsing type: , name: count
    // Error parsing type: , name: resourceLoader
    // Error parsing type: , name: resourcePager
}

@end

@interface _TtC9HQFriends22SearchResultsViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onReloadData
    // Error parsing type: , name: onChanges
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: onLoaded
    // Error parsing type: , name: sections
    // Error parsing type: , name: timeInterval
    // Error parsing type: , name: state
    // Error parsing type: , name: timer
    // Error parsing type: , name: searchResults
}

@end

@interface _TtC9HQFriends21AnyTableCellViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: identity
    // Error parsing type: , name: isEqualImpl
}

@end

@interface _TtC9HQFriends27VerticalConnectContactsCell : UITableViewCell
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_descriptionLabel
    // Error parsing type: , name: $__lazy_storage_$_button
    // Error parsing type: , name: $__lazy_storage_$_loaderView
}

- (void).cxx_destruct;
- (void)onButtonPressed;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

@interface _TtC9HQFriends28AddressBookContactsViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onReloadData
    // Error parsing type: , name: onChanges
    // Error parsing type: , name: onCloseRequested
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: onContactInvited
    // Error parsing type: , name: onLoaded
    // Error parsing type: , name: sections
    // Error parsing type: , name: fetching
}

- (void)storesUpdated;

@end

@interface _TtC9HQFriends29ViewersTableViewConfiguration : _TtCs12_SwiftObject
{
}

@end

@interface _TtC9HQFriends16ViewersViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: _config
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onReloadData
    // Error parsing type: , name: onChanges
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: onLoaded
    // Error parsing type: , name: showConfig
    // Error parsing type: , name: session
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: currentShow
    // Error parsing type: , name: sections
    // Error parsing type: , name: fetching
    // Error parsing type: , name: $__lazy_storage_$_nearbySection
    // Error parsing type: , name: $__lazy_storage_$_friendRequestsSection
    // Error parsing type: , name: $__lazy_storage_$_friendViewersSection
    // Error parsing type: , name: $__lazy_storage_$_proViewersSection
    // Error parsing type: , name: $__lazy_storage_$_otherViewersSection
    // Error parsing type: , name: $__lazy_storage_$_contactsSection
}

@end

@interface _TtC9HQFriends26ProViewersSectionViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: _config
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: questionNumber
    // Error parsing type: , name: proPlayersCount
    // Error parsing type: , name: canFetch
    // Error parsing type: , name: clearCellViewModels
    // Error parsing type: , name: playingViewersPager
    // Error parsing type: , name: proPlaying
    // Error parsing type: , name: backingHeaderViewModel
    // Error parsing type: , name: backingCellViewModels
    // Error parsing type: , name: showConfig
}

@end

@interface _TtC9HQFriends23FriendRequestsViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onReloadData
    // Error parsing type: , name: onChanges
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: onCloseRequested
    // Error parsing type: , name: onLoaded
    // Error parsing type: , name: sections
    // Error parsing type: , name: fetching
}

- (void)storesUpdated;

@end

@interface _TtC9HQFriends29FriendViewersSectionViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: _config
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: $__lazy_storage_$_broadcastID
    // Error parsing type: , name: questionNumber
    // Error parsing type: , name: fetchState
    // Error parsing type: , name: friendsPlaying
    // Error parsing type: , name: friendsWatching
    // Error parsing type: , name: friendsNotInGame
    // Error parsing type: , name: waveMessages
    // Error parsing type: , name: backingHeaderViewModel
    // Error parsing type: , name: backingCellViewModels
    // Error parsing type: , name: showConfig
}

@end

@interface _TtC9HQFriends21LoadMoreCellViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: reuseIdentifier
    // Error parsing type: , name: identity
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: onLoadMoreButtonTapped
}

@end

@interface _TtC9HQFriends29FriendsTableViewConfiguration : _TtCs12_SwiftObject
{
}

@end

@interface _TtC9HQFriends17FriendServiceImpl : _TtCs12_SwiftObject
{
    // Error parsing type: , name: _currentShow
    // Error parsing type: , name: $__lazy_storage_$_addressBookContactStore
    // Error parsing type: , name: $__lazy_storage_$_resourceLoader
    // Error parsing type: , name: $__lazy_storage_$_backingFriendStore
    // Error parsing type: , name: $__lazy_storage_$_backingFriendRequestStore
    // Error parsing type: , name: $__lazy_storage_$_backingPlayerContactStore
    // Error parsing type: , name: $__lazy_storage_$_backingNonPlayerContactStore
    // Error parsing type: , name: disposeBag
}

@end

@interface _TtC9HQFriends22ShareAnswersSwitchView : UIControl
{
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_label
    // Error parsing type: , name: $__lazy_storage_$_switchView
    // Error parsing type: , name: $__lazy_storage_$_roundRectView
}

- (void).cxx_destruct;
- (void)onSwitchViewValueChanged;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface _TtC9HQFriends23PlayerContactsViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onReloadData
    // Error parsing type: , name: onChanges
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: onCloseRequested
    // Error parsing type: , name: onLoaded
    // Error parsing type: , name: sections
    // Error parsing type: , name: fetching
}

- (void)storesUpdated;

@end

@interface _TtC9HQFriends21NonPlayerContactStore : _TtCs12_SwiftObject
{
    // Error parsing type: , name: nonPlayerContacts
    // Error parsing type: , name: resourceLoader
    // Error parsing type: , name: resourcePager
    // Error parsing type: , name: addressBookContactStore
}

@end

@interface _TtC9HQFriends28OtherViewersSectionViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: _config
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: questionNumber
    // Error parsing type: , name: playerCount
    // Error parsing type: , name: canFetch
    // Error parsing type: , name: clearCellViewModels
    // Error parsing type: , name: playingViewersPager
    // Error parsing type: , name: eliminatedViewersPager
    // Error parsing type: , name: othersPlaying
    // Error parsing type: , name: othersWatching
    // Error parsing type: , name: backingHeaderViewModel
    // Error parsing type: , name: backingCellViewModels
    // Error parsing type: , name: showConfig
}

@end

@interface _TtC9HQFriends19GameResourceFactory : _TtCs12_SwiftObject
{
}

@end

@interface _TtC9HQFriends10FriendCell : UITableViewCell
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_avatarView
    // Error parsing type: , name: $__lazy_storage_$_label
    // Error parsing type: , name: $__lazy_storage_$_dotContainerView
    // Error parsing type: , name: $__lazy_storage_$_dotView
    // Error parsing type: , name: $__lazy_storage_$_acceptButton
    // Error parsing type: , name: $__lazy_storage_$_addButton
    // Error parsing type: , name: $__lazy_storage_$_pendingRequestButton
    // Error parsing type: , name: $__lazy_storage_$_inviteButton
    // Error parsing type: , name: $__lazy_storage_$_rejectButton
    // Error parsing type: , name: $__lazy_storage_$_waveButton
}

- (void).cxx_destruct;
- (void)wave;
- (void)inviteContact;
- (void)cancelOutgoingRequest;
- (void)addFriend;
- (void)rejectFriendship;
- (void)acceptFriendship;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

@interface _TtC9HQFriends19FriendCellViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: _config
    // Error parsing type: , name: _currentShow
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onSelected
    // Error parsing type: , name: onInvited
    // Error parsing type: , name: onWaved
    // Error parsing type: , name: imageDisposeBag
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: friendType
    // Error parsing type: , name: isLoading
    // Error parsing type: , name: avatarImage
    // Error parsing type: , name: source
    // Error parsing type: , name: identitySuffix
    // Error parsing type: , name: actionColor
}

@end

__attribute__((visibility("hidden")))
@interface _TtC9HQFriends9SearchBar : UIControl
{
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_textFieldStackView
    // Error parsing type: , name: $__lazy_storage_$_roundRectView
    // Error parsing type: , name: $__lazy_storage_$_searchImage
    // Error parsing type: , name: $__lazy_storage_$_textField
    // Error parsing type: , name: $__lazy_storage_$_clearButton
    // Error parsing type: , name: $__lazy_storage_$_cancelButton
}

- (void).cxx_destruct;
- (void)onUpdateSelectedWithSender:(id)arg1;
- (void)onPressCancel;
- (void)onPressClear;
- (void)layoutSubviews;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;

@end

@interface _TtC9HQFriends17DiscoverViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onReloadData
    // Error parsing type: , name: onChanges
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: onContactInvited
    // Error parsing type: , name: onViewFriendRequests
    // Error parsing type: , name: onViewFriends
    // Error parsing type: , name: onViewPlayerContacts
    // Error parsing type: , name: onViewNonPlayerContacts
    // Error parsing type: , name: onLoaded
    // Error parsing type: , name: session
    // Error parsing type: , name: sections
    // Error parsing type: , name: fetching
    // Error parsing type: , name: $__lazy_storage_$_friendRequestsHeaderViewModel
    // Error parsing type: , name: $__lazy_storage_$_friendsHeaderViewModel
    // Error parsing type: , name: $__lazy_storage_$_playerContactsHeaderViewModel
}

- (void)storesUpdated;

@end

@interface _TtC9HQFriends16FriendsViewModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: onUpdate
    // Error parsing type: , name: onReloadData
    // Error parsing type: , name: onChanges
    // Error parsing type: , name: onCloseRequested
    // Error parsing type: , name: onUserSelected
    // Error parsing type: , name: onLoaded
    // Error parsing type: , name: sections
    // Error parsing type: , name: fetching
}

- (void)storesUpdated;

@end

@interface _TtC9HQFriendsP33_985B604AFFA3C095AC63CE3DDEF9B99F17RoundImageViewRow : UIView
{
    // Error parsing type: , name: image
    // Error parsing type: , name: imageSize
    // Error parsing type: , name: count
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_imageViews
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

@interface _TtC9HQFriends16AvatarBannerView : UIView
{
    // Error parsing type: , name: $__lazy_storage_$_centerView
    // Error parsing type: , name: $__lazy_storage_$_leftView
    // Error parsing type: , name: $__lazy_storage_$_rightView
    // Error parsing type: , name: $__lazy_storage_$_badgeView
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface _TtC9HQFriends18PlayerContactStore : _TtCs12_SwiftObject
{
    // Error parsing type: , name: playerContacts
    // Error parsing type: , name: count
    // Error parsing type: , name: resourceLoader
    // Error parsing type: , name: resourcePager
}

@end

@interface _TtC9HQFriends19ConnectContactsCell : UITableViewCell
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: $__lazy_storage_$_stackView
    // Error parsing type: , name: $__lazy_storage_$_labelStackView
    // Error parsing type: , name: $__lazy_storage_$_titleLabel
    // Error parsing type: , name: $__lazy_storage_$_subtitleLabel
    // Error parsing type: , name: $__lazy_storage_$_button
    // Error parsing type: , name: $__lazy_storage_$_loaderView
}

- (void).cxx_destruct;
- (void)onButtonPressed;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

