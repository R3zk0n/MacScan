// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILIOUTILS_$1_H
#define ORGAPACHELUCENEUTILIOUTILS_$1_H


#import <Foundation/Foundation.h>

#import "JavaUtilLinkedHashMap.h"
#import "OrgLukhnosPortmobileFileFileVisitor-Protocol.h"

@interface OrgApacheLuceneUtilIOUtils_$1 : NSObject <OrgLukhnosPortmobileFileFileVisitor>

 {
    JavaUtilLinkedHashMap *val$unremoved_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)preVisitDirectoryWithId:(id)arg0 withOrgLukhnosPortmobileFileAttributeBasicFileAttributes:(id)arg1 ;
-(id)postVisitDirectoryWithId:(id)arg0 withJavaIoIOException:(id)arg1 ;
-(id)visitFileWithId:(id)arg0 withOrgLukhnosPortmobileFileAttributeBasicFileAttributes:(id)arg1 ;
-(id)visitFileFailedWithId:(id)arg0 withJavaIoIOException:(id)arg1 ;
-(id)initWithJavaUtilLinkedHashMap:(id)arg0 ;
-(void)dealloc;


@end


#endif