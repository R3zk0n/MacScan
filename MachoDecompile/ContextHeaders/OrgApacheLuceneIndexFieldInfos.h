// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFIELDINFOS_H
#define ORGAPACHELUCENEINDEXFIELDINFOS_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "JavaUtilHashMap.h"
#import "JavaLangIterable-Protocol.h"
#import "JavaUtilSortedMap-Protocol.h"
#import "JavaUtilCollection-Protocol.h"

@interface OrgApacheLuceneIndexFieldInfos : NSObject <JavaLangIterable>

 {
    BOOL hasFreq_;
    BOOL hasProx_;
    BOOL hasPayloads_;
    BOOL hasOffsets_;
    BOOL hasVectors_;
    BOOL hasNorms_;
    BOOL hasDocValues_;
    IOSObjectArray *byNumberTable_;
    id<JavaUtilSortedMap> *byNumberMap_;
    JavaUtilHashMap *byName_;
    id<JavaUtilCollection> *values_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneIndexFieldInfoArray:(id)arg0 ;
-(BOOL)hasFreq;
-(BOOL)hasProx;
-(BOOL)hasPayloads;
-(BOOL)hasOffsets;
-(BOOL)hasVectors;
-(BOOL)hasNorms;
-(BOOL)hasDocValues;
-(int)size;
-(id)iterator;
-(id)fieldInfoWithNSString:(id)arg0 ;
-(id)fieldInfoWithInt:(int)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif