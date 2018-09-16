/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "StickerSelectionViewDataSource.h"
#import "VKClient-Structs.h"
#import "StickerSelectionView.h"

@class StoreStockManager, VKStoreProductSticker, MainModel, NSString;

__attribute__((visibility("hidden")))
@interface StickerSelectionViewAttachable : StickerSelectionView <StickerSelectionViewDataSource> {
	VKStoreProductSticker* _product;
	StoreStockManager* _storeStockManager;
	MainModel* _mainModel;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) MainModel* mainModel;
@property(retain, nonatomic) StoreStockManager* storeStockManager;
@property(retain, nonatomic) VKStoreProductSticker* product;
-(void).cxx_destruct;
-(id)stickerSelectionViewProductId:(id)anId;
-(id)stickerSelectionViewBaseUrl:(id)url;
-(id)stickerSelectionViewStickerIds:(id)ids;
-(void)attach:(id)attach;
-(BOOL)productPurchasedAndActiveAndLoaded;
-(void)updateHeaderViewAnimated:(BOOL)animated;
-(void)notificationProductPurchased:(id)purchased;
-(void)notificationProductLoadingChanged:(id)changed;
-(id)initWithFrame:(CGRect)frame collectionViewLayout:(id)layout stickersLoadingManager:(id)manager shouldShowPopup:(BOOL)popup mainModel:(id)model;
-(void)dealloc;
@end
