// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LUCENECONTEXTENGINE_H
#define LUCENECONTEXTENGINE_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>
#import <ProactiveSupport/_PASBloomFilter.h>

#import "ContextEngine.h"
#import "OrgApacheLuceneIndexDirectoryReader.h"
#import "Wordlist.h"
#import "MicroLID.h"
#import "KeylessMap.h"
#import "ComAppleContextkitCategoriesConstellation.h"
#import "ComAppleContextkitUtilSpindleArray.h"
#import "CTKAssetsProtocol-Protocol.h"

@interface LuceneContextEngine : ContextEngine {
    int _nMaxDoc;
    NSInteger _nTerms;
    id<CTKAssetsProtocol> *_assets;
    _opaque_pthread_mutex_t _indexLock;
    NSString *_overrideIndexPath;
    NSUInteger _minFileSizeForNSDataMMap;
    NSString *_effectiveIndexPath;
    NSString *_effectiveIndexId;
    NSUInteger _requestCount;
    NSUInteger _nsDataBufferSize;
    NSObject<OS_dispatch_source> *_memoryWarningEventSource;
}


@property (retain, nonatomic) OrgApacheLuceneIndexDirectoryReader *reader; // ivar: _reader
@property (retain, nonatomic) Wordlist *wordlist; // ivar: _wordlist
@property (retain, nonatomic) _PASBloomFilter *bloomFilter; // ivar: _bloomFilter
@property (retain, nonatomic) MicroLID *languageDetector; // ivar: _languageDetector
@property (retain, nonatomic) KeylessMap *treasureMap; // ivar: _treasureMap
@property (retain, nonatomic) ComAppleContextkitCategoriesConstellation *constellation; // ivar: _constellation
@property (retain, nonatomic) KeylessMap *qidToQueriesMap; // ivar: _qidToQueriesMap
@property (retain, nonatomic) ComAppleContextkitUtilSpindleArray *queriesArray; // ivar: _queriesArray
@property (retain, nonatomic) KeylessMap *tagsMap; // ivar: _tagsMap
@property (retain, nonatomic) NSCharacterSet *nGramBreakingSeparators; // ivar: _nGramBreakingSeparators
@property (retain, nonatomic) NSCharacterSet *allowedNGramSeparators; // ivar: _allowedNGramSeparators
@property (retain, nonatomic) NSCharacterSet *quotedTokenCharacterSet; // ivar: _quotedTokenCharacterSet
@property (retain, nonatomic) NSCharacterSet *partialNGramCharacterSet; // ivar: _partialNGramCharacterSet


-(int)maxDoc;
-(NSInteger)numTerms;
-(id)initWithAssets:(id)arg0 ;
-(void)dealloc;
-(void)updateConfigurationWithConfig:(id)arg0 ;
-(void)recycle;
-(void)registerForMemoryWarnings;
-(void)unregisterForMemoryWarnings;
-(void)receivedMemoryWarning;
-(void)_reloadIndex;
-(void)findResultsForRequest:(id)arg0 withReply:(id)arg1 ;
-(id)debugStatus;
-(id)indexId;
-(char)disabled;
-(char)fallbackModeEnabled;
-(char)stillWarmingUp;
-(id)warmUpDatPath;
-(id)ancestorsForTopics:(id)arg0 ;
+(void)initialize;
+(NSUInteger)queryTypeForRequest:(id)arg0 ;


@end


#endif