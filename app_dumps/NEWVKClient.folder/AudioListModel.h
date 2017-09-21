/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class VKAudioPlaylist;

__attribute__((visibility("hidden")))
@interface AudioListModel : ListModel {
	VKAudioPlaylist* _playlist;
}
@property(retain, nonatomic) VKAudioPlaylist* playlist;
-(void).cxx_destruct;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)request:(int)request count:(int)count;
-(id)process:(id)process;
-(int)defaultPage;
-(id)countKey;
-(id)setupSearch;
-(id)setupPlaylist:(id)playlist;
@end
