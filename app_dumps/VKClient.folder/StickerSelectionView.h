/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "StickerPopupDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"

@class StickersLoadingManager, UIScrollView, UILabel, UIView, StickerPopup, UICollectionView, NSString;
@protocol StickerSelectionViewDataSource, StickerSelectionViewScrollingDelegate, StickerSelectionViewDelegate, StickerSelectionViewPhotoEditorModeDelegate;

__attribute__((visibility("hidden")))
@interface StickerSelectionView : XXUnknownSuperclass <UICollectionViewDelegate, UICollectionViewDataSource, StickerPopupDelegate> {
	id<StickerSelectionViewDelegate> _delegate;
	id<StickerSelectionViewPhotoEditorModeDelegate> _photoEditorModeDelegate;
	id<StickerSelectionViewScrollingDelegate> _scrollingDelegate;
	id<StickerSelectionViewDataSource> _dataSource;
	StickersLoadingManager* _stickersLoadingManager;
	NSString* _emptyText;
	UIView* _headerView;
	UICollectionView* _collectionView;
	StickerPopup* _stickerPopup;
	UILabel* _emptyLabel;
	XXStruct_m5P4pB _stickerImage;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) XXStruct_m5P4pB stickerImage;
@property(readonly, retain, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) UIView* headerView;
@property(copy, nonatomic) NSString* emptyText;
@property(assign, nonatomic) id<StickerSelectionViewDataSource> dataSource;
@property(assign, nonatomic) id<StickerSelectionViewScrollingDelegate> scrollingDelegate;
@property(assign, nonatomic) id<StickerSelectionViewPhotoEditorModeDelegate> photoEditorModeDelegate;
@property(assign, nonatomic) id<StickerSelectionViewDelegate> delegate;
@property(retain, nonatomic) UILabel* emptyLabel;
@property(retain, nonatomic) StickerPopup* stickerPopup;
@property(retain, nonatomic) StickersLoadingManager* stickersLoadingManager;
@property(retain, nonatomic) UICollectionView* collectionView;
-(void).cxx_destruct;
-(void)setHeaderView:(id)view animated:(BOOL)animated;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(void)scrollViewDidScroll:(id)scrollView;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(int)numberOfSectionsInCollectionView:(id)collectionView;
-(id)stickerPopup:(id)popup imageInsteadOfActivityIndicatorForIndexPath:(id)indexPath;
-(id)stickerPopup:(id)popup stickerBaseUrlForIndexPath:(id)indexPath;
-(id)stickerPopup:(id)popup stickerIdForIndexPath:(id)indexPath;
-(void)reloadData;
-(id)initWithFrame:(CGRect)frame collectionViewLayout:(id)layout stickersLoadingManager:(id)manager shouldShowPopup:(BOOL)popup;
-(void)dealloc;
@end
