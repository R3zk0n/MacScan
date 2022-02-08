// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LUCENECONTEXTREQUEST_H
#define LUCENECONTEXTREQUEST_H

@class _PASBloomFilterHashArray;

#import <Foundation/Foundation.h>
#import <ProactiveSupport/_PASBloomFilter.h>
#import <CoreFoundation/CoreFoundation.h>
#import <ContextKit/CKContextResponse.h>
#import <ContextKit/CKContextRequest.h>

#import "OrgApacheLuceneSearchIndexSearcher.h"
#import "OrgApacheLuceneAnalysisAnalyzer.h"
#import "ScoreInterceptTargetWithCallback.h"
#import "OrgApacheLuceneIndexTermsEnum.h"
#import "ComAppleContextkitUtilBytesRefPool.h"
#import "OrgApacheLuceneDocumentDocumentStoredFieldVisitor.h"
#import "LuceneContextEngine.h"
#import "ContextConfiguration.h"

@interface LuceneContextRequest : NSObject {
    int _nMaxDoc;
    NSInteger _nTerms;
    char _timing;
    OrgApacheLuceneSearchIndexSearcher *_searcher;
    OrgApacheLuceneAnalysisAnalyzer *_analyzer;
    _PASBloomFilter *_bloomFilter;
    NSMapTable *_tokenInfos;
    NSMapTable *_bigramInfos;
    NSMutableArray *_tokenInfosSequence;
    NSMutableArray *_bigramInfosSequence;
    ScoreInterceptTargetWithCallback *_termQueryInterceptor;
    ScoreInterceptTargetWithCallback *_phraseQueryInterceptor;
    ScoreInterceptTargetWithCallback *_secondaryInterceptor;
    NSMapTable *_perDocumentObjects;
    _PASBloomFilterHashArray *_hashesTokenReuse;
    NSMutableSet *_extractTermsReuse;
    NSMutableDictionary *_fingerprints;
    NSMutableDictionary *_fingerprintsPrimary;
    char _haveFingerprintDupes;
    char _needFingerprintPostprocessing;
    OrgApacheLuceneIndexTermsEnum *_textTermsEnum;
    NSMutableArray *_termResults;
    NSMutableDictionary *_weakKeywordTermResults;
    NSMutableArray *_termResultsWithDocument;
    ComAppleContextkitUtilBytesRefPool *_bytesRefPool;
    NSCharacterSet *_nGramBreakingSeparators;
    NSCharacterSet *_allowedNGramSeparators;
    NSCharacterSet *_quotedTokenCharacterSet;
    NSCharacterSet *_partialNGramCharacterSet;
}


@property (retain, nonatomic) OrgApacheLuceneDocumentDocumentStoredFieldVisitor *docVisitor; // ivar: _docVisitor
@property (retain, nonatomic) LuceneContextEngine *engine; // ivar: _engine
@property (nonatomic) char forceNoResults; // ivar: _forceNoResults
@property (nonatomic) char debug; // ivar: _debug
@property (nonatomic) char debugLogEnabled; // ivar: _debugLogEnabled
@property (nonatomic) char * charBuffer; // ivar: _charBuffer
@property (retain, nonatomic) CKContextResponse *response; // ivar: _response
@property (retain, nonatomic) ContextConfiguration *config; // ivar: _config
@property (retain, nonatomic) CKContextRequest *request; // ivar: _request


-(void)_discardTokenInfos;
-(void)discard;
-(void)dealloc;
-(id)initWithEngine:(id)arg0 forRequest:(id)arg1 ;
-(char)isLanguageSupported:(id)arg0 ;
-(void)findResultsWithReply:(id)arg0 ;
-(void)crashAndBurnAfterJavaException:(id)arg0 ;
-(void)addExtraQueryCompletions;
-(void)addCoreNLPTags;
-(void)augmentResultsWithTags;
-(void)filterResultsByTags:(id)arg0 ;
-(void)_addTopicsForUrl:(id)arg0 toResponse:(id)arg1 ;
-(void)_tokenizeText;
-(id)inspectTitle:(id)arg0 titleForTokenization:(id)arg1 conditionals:(id)arg2 ;
-(id)_readTermInfo:(id)arg0 tokenTypeOut:(*NSUInteger)arg1 weightOut:(*float)arg2 docIdOut:(*int)arg3 ;
-(id)_tokenInfoForToken:(id)arg0 ;
-(id)_lookupBigramTermForTokenA:(id)arg0 tokenB:(id)arg1 tokenTypeOut:(*NSUInteger)arg2 docIdOut:(*int)arg3 ;
-(char)_isIntermediateNameBigramCandidate:(id)arg0 tokenB:(id)arg1 bothStartUppercase:(char)arg2 ;
-(id)_bigramInfoForTokenA:(id)arg0 tokenB:(id)arg1 bigram:(id)arg2 bothStartUppercase:(char)arg3 ;
-(id)_constructQuery;
-(id)_bestTypeVariantForTokenInfo:(id)arg0 allowingAllCaps:(char)arg1 ;
-(id)_resultForTokenInfo:(id)arg0 minPrefix:(NSInteger)arg1 ;
-(id)_resultForBigramInfo:(id)arg0 minPrefix:(NSInteger)arg1 ;
-(void)_augmentResult:(id)arg0 withDocId:(int)arg1 checkLanguageRedirect:(char)arg2 ;
-(void)_searchTopKWithQuery:(id)arg0 topK:(NSUInteger)arg1 ;
-(void)_processResults:(id)arg0 topK:(NSUInteger)arg1 ;
-(void)_blendResults;
-(id)mergeDuplicateResults:(id)arg0 ;
-(void)_addTermResults;
-(id)_tokenStringForText:(id)arg0 ;
-(id)_processResult:(int)arg0 score:(float)arg1 relativeScore:(float)arg2 ;
-(void)postprocessAddQuery:(id)arg0 ;
-(void)_rerankFoldedResults:(id)arg0 ;
-(id)_computeHashesWithSeed:(int)arg0 forBytesRef:(id)arg1 reuse:(id)arg2 ;
-(void)addDebugStringTo:(id)arg0 withPrefix:(id)arg1 forQuery:(id)arg2 ;
-(id)textTermsEnum;
+(void)initialize;
+(id)setOfLinewiseStringsFromFieldValue:(id)arg0 ;
+(id)lookupTreasureMapForDomainHierarchy:(id)arg0 fromTreasureMap:(id)arg1 intoSet:(id)arg2 isRelaxedMatchOut:(*char)arg3 ;
+(id)stripHostToDomain:(id)arg0 level:(NSUInteger)arg1 ;
+(id)hostToCapitalizedName:(id)arg0 ;
+(id)reverseFQDN:(id)arg0 ;


@end


#endif