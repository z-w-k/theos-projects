/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "VKClient-Structs.h"

@class VKDomain;

__attribute__((visibility("hidden")))
@interface VKDomainSelectionViewController : VKMLiveController {
	VKDomain* _selectedObject;
}
@property(retain, nonatomic) VKDomain* selectedObject;
-(void).cxx_destruct;
-(void)didSelectObject:(id)object;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)applyCheckmarkToCell:(id)cell withDomain:(id)domain;
-(void)clearSelection;
-(void)configureClearButton;
-(BOOL)handleCell:(id)cell select:(BOOL)select;
-(Class)expectedClass;
-(id)makeCheckmarkView;
-(void)viewDidLoad;
@end

