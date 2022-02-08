// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef TOKENINFO_H
#define TOKENINFO_H

@class _PASBloomFilterHashArray;

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "OrgApacheLuceneIndexTerm.h"
#import "NSCopying-Protocol.h"

@interface TokenInfo : NSObject <NSCopying>

 {
    NSUInteger _type;
}


@property (readonly, nonatomic) char valid; // ivar: _valid
@property (readonly, nonatomic) NSString *token; // ivar: _token
@property (readonly, nonatomic) OrgApacheLuceneIndexTerm *term; // ivar: _term
@property (readonly, nonatomic) float weight; // ivar: _weight
@property (readonly, nonatomic) int docId; // ivar: _docId
@property (readonly, nonatomic) _PASBloomFilterHashArray *hashes; // ivar: _hashes
@property (readonly, nonatomic) unsigned int count; // ivar: _count
@property (nonatomic) unsigned int firstOccurence; // ivar: _firstOccurence
@property (nonatomic) unsigned int firstOccurenceUnique; // ivar: _firstOccurenceUnique
@property (retain, nonatomic) NSCountedSet *precedingTokens; // ivar: _precedingTokens
@property (retain, nonatomic) NSMutableArray *offsets; // ivar: _offsets
@property (nonatomic) char addOffsets; // ivar: _addOffsets
@property (nonatomic) unsigned int startsQuotedCount; // ivar: _startsQuotedCount
@property (nonatomic) unsigned int endsQuotedCount; // ivar: _endsQuotedCount
@property (nonatomic) unsigned int partialNgramCount; // ivar: _partialNgramCount


-(id)initWithToken:(id)arg0 withHashes:(id)arg1 term:(id)arg2 type:(NSUInteger)arg3 weight:(float)arg4 docId:(int)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)incrementCount;
-(char)isPrimary;
-(char)needOffsets;
-(char)isQuoted;
-(NSInteger)isTermResultWithPrimary:(char)arg0 config:(id)arg1 ;
-(void)addPrecedingToken:(id)arg0 ;
-(void)addOffset:(id)arg0 ;
-(void)cleanForCache;
+(void)initialize;
+(id)ignoreUnknownTokenSentinel;
+(id)ignoreStopwordTokenSentinel;
+(char)isPrimaryType:(NSUInteger)arg0 ;
+(char)isNameType:(NSUInteger)arg0 ;
+(char)isSurnameType:(NSUInteger)arg0 ;
+(char)isTopicType:(NSUInteger)arg0 ;
+(char)isTitleMatchType:(NSUInteger)arg0 ;


@end


#endif