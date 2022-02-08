// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LUCENECONTEXTRESULT_H
#define LUCENECONTEXTRESULT_H


#import <ContextKit/CKContextResult.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>


@interface LuceneContextResult : CKContextResult

@property (retain, nonatomic) NSMutableArray *foldedResults; // ivar: _foldedResults
@property (nonatomic) NSInteger foldCurrentRank; // ivar: _foldCurrentRank
@property (nonatomic) NSInteger foldScore; // ivar: _foldScore
@property (retain, nonatomic) NSNumber *fingerprintPrimary; // ivar: _fingerprintPrimary
@property (nonatomic) char skip; // ivar: _skip
@property (nonatomic) char titlePrimary; // ivar: _titlePrimary
@property (nonatomic) NSUInteger titleMatch; // ivar: _titleMatch
@property (retain, nonatomic) NSNumber *docId; // ivar: _docId
@property (retain, nonatomic) NSString *relatedField; // ivar: _relatedField
@property (nonatomic) NSUInteger docIdRank; // ivar: _docIdRank
@property (nonatomic) float relativeScore; // ivar: _relativeScore
@property (retain, nonatomic) NSNumber *blendedScore; // ivar: _blendedScore
@property (retain, nonatomic) NSString *titleTokenString; // ivar: _titleTokenString
@property (nonatomic) float luceneScore; // ivar: _luceneScore
@property (nonatomic) char forceBottomRank; // ivar: _forceBottomRank
@property (retain, nonatomic) NSString *term; // ivar: _term


-(id)initWithDocId:(NSInteger)arg0 title:(id)arg1 query:(id)arg2 url:(id)arg3 category:(id)arg4 ;
-(id)initWithText:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addToFoldedResults:(id)arg0 ;
-(void)mergeWithResult:(id)arg0 ;
-(void)finalizeFoldedResult;
-(void)encodeWithCoder:(id)arg0 ;
-(Class)classForCoder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(char)supportsSecureCoding;


@end


#endif