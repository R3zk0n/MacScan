// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILATTRIBUTEIMPL_H
#define ORGAPACHELUCENEUTILATTRIBUTEIMPL_H


#import <Foundation/Foundation.h>

#import "NSCopying-Protocol.h"
#import "OrgApacheLuceneUtilAttribute-Protocol.h"

@interface OrgApacheLuceneUtilAttributeImpl : NSObject <NSCopying, OrgApacheLuceneUtilAttribute>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)reflectAsStringWithBoolean:(BOOL)arg0 ;
-(void)reflectWithWithOrgApacheLuceneUtilAttributeReflector:(id)arg0 ;
-(id)clone;
-(id)init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif