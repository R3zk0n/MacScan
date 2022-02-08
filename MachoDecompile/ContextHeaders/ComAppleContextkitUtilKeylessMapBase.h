// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILKEYLESSMAPBASE_H
#define COMAPPLECONTEXTKITUTILKEYLESSMAPBASE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexInput.h"
#import "ComAppleContextkitUtilValueMarshalling.h"
#import "ComAppleContextkitUtilValueMarshalling_ValueConverter.h"
#import "OrgApacheLuceneStoreDirectory.h"
#import "JavaIoCloseable-Protocol.h"

@interface ComAppleContextkitUtilKeylessMapBase : NSObject <JavaIoCloseable>

 {
    int numHashFunctions_;
    int numIndexedValues_;
    OrgApacheLuceneStoreIndexInput *input_;
    int numBuckets_;
    int bucketsOffset_;
    int valuesIndexOffset_;
    ComAppleContextkitUtilValueMarshalling *keyValueMarshalling_;
    ComAppleContextkitUtilValueMarshalling_ValueConverter *valueConverter_;
    BOOL embeddedValues_;
    int numKeys_;
    OrgApacheLuceneStoreDirectory *dir_;
    BOOL closeDir_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)closeDirUponClose;
-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withNSString:(id)arg1 withIOSClass:(id)arg2 withComAppleContextkitUtilValueMarshalling:(id)arg3 ;
-(id)valueConverterForCodeWithInt:(int)arg0 ;
-(id)newArray;
-(void)close;
-(id)getWithHashesWithIntArray:(id)arg0 ;
-(id)valueForIndexWithInt:(int)arg0 ;
-(id)valueForEmbeddedWithInt:(int)arg0 ;
-(id)loadCandidatesWithComAppleContextkitUtilKeylessMapBase_BucketOffset:(id)arg0 ;
-(int)getNumIndexedValues;
-(int)getNumKeys;
-(void)dealloc;
+(id)openWithOrgApacheLuceneStoreDirectory:(id)arg0 withNSString:(id)arg1 ;
+(int)moduloWithInt:(int)arg0 withInt:(int)arg1 ;


@end


#endif