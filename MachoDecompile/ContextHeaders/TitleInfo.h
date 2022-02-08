// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef TITLEINFO_H
#define TITLEINFO_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface TitleInfo : NSObject

@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *topicIdOverride; // ivar: _topicIdOverride
@property (retain, nonatomic) NSSet *importantTokens; // ivar: _importantTokens
@property (nonatomic) NSUInteger tokenCountPrimary; // ivar: _tokenCountPrimary
@property (nonatomic) NSUInteger tokenCount; // ivar: _tokenCount
@property (nonatomic) NSUInteger tokenCountMatching; // ivar: _tokenCountMatching
@property (retain, nonatomic) NSString *tokenString; // ivar: _tokenString
@property (nonatomic) NSInteger minPrefix; // ivar: _minPrefix
@property (nonatomic) char forceBottomRank; // ivar: _forceBottomRank
@property (retain, nonatomic) NSArray *conditionals; // ivar: _conditionals


-(id)debugDescription;


@end


#endif