/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIView, UIImageView, UITextView;

__attribute__((visibility("hidden")))
@interface VK_ShareView : XXUnknownSuperclass {
	id _onSendTapBlock;
	NSString* _shareText;
	UIView* _shareView;
	UIImageView* _sharedImageView;
	UITextView* _sharedTextView;
}
@property(readonly, copy, nonatomic) NSString* enteredText;
@property(copy, nonatomic) NSString* shareText;
@property(copy, nonatomic) id onSendTapBlock;
@property(retain, nonatomic) UITextView* sharedTextView;
@property(retain, nonatomic) UIImageView* sharedImageView;
@property(retain, nonatomic) UIView* shareView;
-(void).cxx_destruct;
-(void)updateShareViewWithKeyboardHeight:(float)keyboardHeight andAnimationDuration:(double)duration;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillChangeFrame:(id)keyboard;
-(void)removeKeyboardObservers;
-(void)addKeyboardObservers;
-(void)internalDismissWithCompletion:(id)completion;
-(void)hide;
-(void)show;
-(void)send:(id)send;
-(void)cancel:(id)cancel;
-(void)setShareImage:(id)image;
-(void)configureWithImage:(id)image text:(id)text;
-(void)dealloc;
-(id)initWithType:(unsigned)type andImage:(id)image andText:(id)text;
@end
