// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSPERFIELDPERFIELDPOSTINGSFORMAT_FIELDSREADER_H
#define ORGAPACHELUCENECODECSPERFIELDPERFIELDPOSTINGSFORMAT_FIELDSREADER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsFieldsProducer.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat_FieldsReader : OrgApacheLuceneCodecsFieldsProducer {
    id<JavaUtilMap> *fields_;
    id<JavaUtilMap> *formats_;
    NSString *segment_;
}




-(id)initWithOrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat_FieldsReader:(id)arg0 ;
-(id)initWithOrgApacheLuceneIndexSegmentReadState:(id)arg0 ;
-(id)iterator;
-(id)termsWithNSString:(id)arg0 ;
-(int)size;
-(void)close;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)checkIntegrity;
-(id)getMergeInstance;
-(id)description;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(void)initialize;


@end


#endif