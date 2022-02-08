// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDBULKOPERATION_H
#define ORGAPACHELUCENEUTILPACKEDBULKOPERATION_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilPackedPackedInts_Decoder-Protocol.h"
#import "OrgApacheLuceneUtilPackedPackedInts_Encoder-Protocol.h"

@interface OrgApacheLuceneUtilPackedBulkOperation : NSObject <OrgApacheLuceneUtilPackedPackedInts_Decoder, OrgApacheLuceneUtilPackedPackedInts_Encoder>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(int)writeLongWithLong:(NSInteger)arg0 withByteArray:(id)arg1 withInt:(int)arg2 ;
-(int)computeIterationsWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)init;
+(id)ofWithOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg0 withInt:(int)arg1 ;
+(void)initialize;


@end


#endif