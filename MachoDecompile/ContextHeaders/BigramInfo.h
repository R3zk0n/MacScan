// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef BIGRAMINFO_H
#define BIGRAMINFO_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexTerm.h"
#import "TokenInfo.h"
#import "NSCopying-Protocol.h"

@interface BigramInfo : NSObject <NSCopying>

 {
    NSUInteger _type;
}


@property (readonly, nonatomic) char valid; // ivar: _valid
@property (readonly, nonatomic) OrgApacheLuceneIndexTerm *term; // ivar: _term
@property (readonly, nonatomic) TokenInfo *tokenA; // ivar: _tokenA
@property (readonly, nonatomic) TokenInfo *tokenB; // ivar: _tokenB
@property (readonly, nonatomic) float weight; // ivar: _weight
@property (readonly, nonatomic) int docId; // ivar: _docId
@property (readonly, nonatomic) unsigned int count; // ivar: _count
@property (nonatomic) unsigned int firstOccurence; // ivar: _firstOccurence
@property (nonatomic) unsigned int firstOccurenceUnique; // ivar: _firstOccurenceUnique
@property (nonatomic) char continuous; // ivar: _continuous


-(id)initWithTerm:(id)arg0 bigramTokenA:(id)arg1 tokenB:(id)arg2 type:(NSUInteger)arg3 weight:(float)arg4 docId:(int)arg5 ;
-(void)incrementCount;
-(void)adjustCounts;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(char)isPrimary;
-(id)tokenSequence;
-(NSInteger)isTermResultWithPrimary:(char)arg0 config:(id)arg1 ;
+(void)initialize;
+(id)ignoreUnknownBigramSentinel;
+(id)ignoreStopwordBigramSentinel;


@end


#endif