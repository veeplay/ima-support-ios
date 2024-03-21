//
//  APSImaAdBreak.h
//  Veeplay
//
//  Created by Ovidiu Nitan on 02/12/2019.
//  Copyright © 2019 Appscend. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APSMediaPlayer.h"

@class APSVASTAdBreak;

@protocol APSImaAdBreakProtocol

- (instancetype _Nullable) initWithAdBreak:(APSVASTAdBreak *_Nonnull)adBreak;
- (void) trigger;

@property (weak, readonly, nonatomic) APSVASTAdBreak *_Nullable adBreak;

@end

@interface APSImaAdBreak : NSObject <APSImaAdBreakProtocol>
@property (weak, readonly, nonatomic) APSVASTAdBreak *_Nullable adBreak;
@end

@interface APSMediaPlayer (APSImaAdBreak)
@property (nonatomic, strong) APSImaAdBreak *_Nullable _currentImaAdBreak;

/**
 *  Returns `YES` if an Google IMA ad is currently playing
 */
- (BOOL) isPlayingImaAd;

/**
 *  Returns the current playing Google IMA ad, or `nil` if no such ad is playing
 */
- (APSImaAdBreak * _Nullable) getCurrentImaAdBreak;

/**
 *  Sets the current playing Google IMA ad
 */
- (void) setCurrentImaAdBreak:(APSImaAdBreak * _Nullable) imaAdBreak;
@end
