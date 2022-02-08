// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTBYTESEQUENCEOUTPUTS_H
#define ORGAPACHELUCENEUTILFSTBYTESEQUENCEOUTPUTS_H



#import "OrgApacheLuceneUtilFstOutputs.h"

@interface OrgApacheLuceneUtilFstByteSequenceOutputs : OrgApacheLuceneUtilFstOutputs



-(id)init;
-(id)commonWithId:(id)arg0 withId:(id)arg1 ;
-(id)subtractWithId:(id)arg0 withId:(id)arg1 ;
-(id)addWithId:(id)arg0 withId:(id)arg1 ;
-(void)writeWithId:(id)arg0 withOrgApacheLuceneStoreDataOutput:(id)arg1 ;
-(id)readWithOrgApacheLuceneStoreDataInput:(id)arg0 ;
-(void)skipOutputWithOrgApacheLuceneStoreDataInput:(id)arg0 ;
-(id)getNoOutput;
-(id)outputToStringWithId:(id)arg0 ;
-(NSInteger)ramBytesUsedWithId:(id)arg0 ;
-(id)description;
+(id)getSingleton;
+(void)initialize;


@end


#endif