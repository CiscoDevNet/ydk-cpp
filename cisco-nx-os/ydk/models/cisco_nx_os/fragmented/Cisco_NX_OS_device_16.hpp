#ifndef _CISCO_NX_OS_DEVICE_16_
#define _CISCO_NX_OS_DEVICE_16_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::AcctItems : public ydk::Entity
{
    public:
        AcctItems();
        ~AcctItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sessionnum; //type: uint32
        ydk::YLeaf sessionid; //type: uint32
        ydk::YLeaf sourceid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string

}; // System::AcctItems


class System::RetryItems : public ydk::Entity
{
    public:
        RetryItems();
        ~RetryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class SrcItems; //type: System::RetryItems::SrcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RetryItems::SrcItems> src_items;
        
}; // System::RetryItems


class System::RetryItems::SrcItems : public ydk::Entity
{
    public:
        SrcItems();
        ~SrcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RetrySrcList; //type: System::RetryItems::SrcItems::RetrySrcList

        ydk::YList retrysrc_list;
        
}; // System::RetryItems::SrcItems


class System::RetryItems::SrcItems::RetrySrcList : public ydk::Entity
{
    public:
        RetrySrcList();
        ~RetrySrcList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srcdn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class TgtItems; //type: System::RetryItems::SrcItems::RetrySrcList::TgtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RetryItems::SrcItems::RetrySrcList::TgtItems> tgt_items;
        
}; // System::RetryItems::SrcItems::RetrySrcList


class System::RetryItems::SrcItems::RetrySrcList::TgtItems : public ydk::Entity
{
    public:
        TgtItems();
        ~TgtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RetryTargetList; //type: System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList

        ydk::YList retrytarget_list;
        
}; // System::RetryItems::SrcItems::RetrySrcList::TgtItems


class System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList : public ydk::Entity
{
    public:
        RetryTargetList();
        ~RetryTargetList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf targetdn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string

}; // System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList


class System::SpanItems : public ydk::Entity
{
    public:
        SpanItems();
        ~SpanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class DbItems; //type: System::SpanItems::DbItems
        class SessionItems; //type: System::SpanItems::SessionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::SessionItems> session_items;
        
}; // System::SpanItems


class System::SpanItems::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DbList; //type: System::SpanItems::DbItems::DbList

        ydk::YList db_list;
        
}; // System::SpanItems::DbItems


class System::SpanItems::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: SpanDbT
        ydk::YLeaf name; //type: string
        class EprItems; //type: System::SpanItems::DbItems::DbList::EprItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::DbItems::DbList::EprItems> epr_items;
        
}; // System::SpanItems::DbItems::DbList


class System::SpanItems::DbItems::DbList::EprItems : public ydk::Entity
{
    public:
        EprItems();
        ~EprItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EpRecList; //type: System::SpanItems::DbItems::DbList::EprItems::EpRecList

        ydk::YList eprec_list;
        
}; // System::SpanItems::DbItems::DbList::EprItems


class System::SpanItems::DbItems::DbList::EprItems::EpRecList : public ydk::Entity
{
    public:
        EpRecList();
        ~EpRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vnid; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf synthvrf; //type: uint32
        ydk::YLeaf synthip; //type: string
        ydk::YLeaf tep; //type: string
        ydk::YLeaf name; //type: string

}; // System::SpanItems::DbItems::DbList::EprItems::EpRecList


class System::SpanItems::SessionItems : public ydk::Entity
{
    public:
        SessionItems();
        ~SessionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionList; //type: System::SpanItems::SessionItems::SessionList

        ydk::YList session_list;
        
}; // System::SpanItems::SessionItems


class System::SpanItems::SessionItems::SessionList : public ydk::Entity
{
    public:
        SessionList();
        ~SessionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint8
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf asrcgrpdn; //type: string
        ydk::YLeaf descr; //type: string
        class SrcItems; //type: System::SpanItems::SessionItems::SessionList::SrcItems
        class FabsrcItems; //type: System::SpanItems::SessionItems::SessionList::FabsrcItems
        class ErdstItems; //type: System::SpanItems::SessionItems::SessionList::ErdstItems
        class LdstItems; //type: System::SpanItems::SessionItems::SessionList::LdstItems
        class IdomainItems; //type: System::SpanItems::SessionItems::SessionList::IdomainItems
        class RssessionToDomainRefItems; //type: System::SpanItems::SessionItems::SessionList::RssessionToDomainRefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::SessionItems::SessionList::SrcItems> src_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::SessionItems::SessionList::FabsrcItems> fabsrc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::SessionItems::SessionList::ErdstItems> erdst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::SessionItems::SessionList::LdstItems> ldst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::SessionItems::SessionList::IdomainItems> idomain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::SessionItems::SessionList::RssessionToDomainRefItems> rssessiontodomainref_items;
        
}; // System::SpanItems::SessionItems::SessionList


class System::SpanItems::SessionItems::SessionList::SrcItems : public ydk::Entity
{
    public:
        SrcItems();
        ~SrcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceList; //type: System::SpanItems::SessionItems::SessionList::SrcItems::SourceList

        ydk::YList source_list;
        
}; // System::SpanItems::SessionItems::SessionList::SrcItems


class System::SpanItems::SessionItems::SessionList::SrcItems::SourceList : public ydk::Entity
{
    public:
        SourceList();
        ~SourceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: SpanSrcT
        ydk::YLeaf dir; //type: SpanDirection
        ydk::YLeaf mode; //type: SpanMode
        ydk::YLeaf domain; //type: string
        class RsspanSrcToL2CktEpAttItems; //type: System::SpanItems::SessionItems::SessionList::SrcItems::SourceList::RsspanSrcToL2CktEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::SessionItems::SessionList::SrcItems::SourceList::RsspanSrcToL2CktEpAttItems> rsspansrctol2cktepatt_items;
        
}; // System::SpanItems::SessionItems::SessionList::SrcItems::SourceList


class System::SpanItems::SessionItems::SessionList::SrcItems::SourceList::RsspanSrcToL2CktEpAttItems : public ydk::Entity
{
    public:
        RsspanSrcToL2CktEpAttItems();
        ~RsspanSrcToL2CktEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf operst; //type: SpanOperSt
        ydk::YLeaf operstqual; //type: SpanOperStQual

}; // System::SpanItems::SessionItems::SessionList::SrcItems::SourceList::RsspanSrcToL2CktEpAttItems


class System::SpanItems::SessionItems::SessionList::FabsrcItems : public ydk::Entity
{
    public:
        FabsrcItems();
        ~FabsrcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FabSourceList; //type: System::SpanItems::SessionItems::SessionList::FabsrcItems::FabSourceList

        ydk::YList fabsource_list;
        
}; // System::SpanItems::SessionItems::SessionList::FabsrcItems


class System::SpanItems::SessionItems::SessionList::FabsrcItems::FabSourceList : public ydk::Entity
{
    public:
        FabSourceList();
        ~FabSourceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ctxencap; //type: string
        ydk::YLeaf bdencap; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: SpanSrcT
        ydk::YLeaf dir; //type: SpanDirection
        ydk::YLeaf mode; //type: SpanMode
        ydk::YLeaf domain; //type: string

}; // System::SpanItems::SessionItems::SessionList::FabsrcItems::FabSourceList


class System::SpanItems::SessionItems::SessionList::ErdstItems : public ydk::Entity
{
    public:
        ErdstItems();
        ~ErdstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SpanDestEncapT
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf ver; //type: SpanErSpanVer
        ydk::YLeaf flowid; //type: uint16
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf vnid; //type: string
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf operst; //type: SpanOperSt
        ydk::YLeaf operstqual; //type: SpanOperStQual

}; // System::SpanItems::SessionItems::SessionList::ErdstItems


class System::SpanItems::SessionItems::SessionList::LdstItems : public ydk::Entity
{
    public:
        LdstItems();
        ~LdstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf operst; //type: SpanOperSt
        ydk::YLeaf operstqual; //type: SpanOperStQual

}; // System::SpanItems::SessionItems::SessionList::LdstItems


class System::SpanItems::SessionItems::SessionList::IdomainItems : public ydk::Entity
{
    public:
        IdomainItems();
        ~IdomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDomainRefList; //type: System::SpanItems::SessionItems::SessionList::IdomainItems::IDomainRefList

        ydk::YList idomainref_list;
        
}; // System::SpanItems::SessionItems::SessionList::IdomainItems


class System::SpanItems::SessionItems::SessionList::IdomainItems::IDomainRefList : public ydk::Entity
{
    public:
        IDomainRefList();
        ~IDomainRefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::SpanItems::SessionItems::SessionList::IdomainItems::IDomainRefList


class System::SpanItems::SessionItems::SessionList::RssessionToDomainRefItems : public ydk::Entity
{
    public:
        RssessionToDomainRefItems();
        ~RssessionToDomainRefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::SpanItems::SessionItems::SessionList::RssessionToDomainRefItems


class System::DhcpItems : public ydk::Entity
{
    public:
        DhcpItems();
        ~DhcpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::DhcpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems> inst_items;
        
}; // System::DhcpItems


class System::DhcpItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf v4relayenabled; //type: boolean
        ydk::YLeaf v6relayenabled; //type: boolean
        ydk::YLeaf counter; //type: uint16
        ydk::YLeaf snoopingenabled; //type: boolean
        ydk::YLeaf snoopingverifymacaddressenabled; //type: boolean
        ydk::YLeaf snoopinginformationoptionenabled; //type: boolean
        ydk::YLeaf relayinformationoptionenabled; //type: boolean
        ydk::YLeaf relayinformationoptionvpnenabled; //type: boolean
        ydk::YLeaf relayinformationoptiontrustenabled; //type: boolean
        ydk::YLeaf relayinformationtrustallenabled; //type: boolean
        ydk::YLeaf relaysuboptioncircuitidcustomizedenabled; //type: boolean
        ydk::YLeaf relaysuboptiontypeciscoenabled; //type: boolean
        ydk::YLeaf smartrelayglobalenabled; //type: boolean
        ydk::YLeaf ipv6relayinformationoptionvpnenabled; //type: boolean
        ydk::YLeaf ipv6relayoptiontypeciscoenabled; //type: boolean
        ydk::YLeaf daivalidatesrc; //type: boolean
        ydk::YLeaf daivalidatedst; //type: boolean
        ydk::YLeaf daivalidateip; //type: boolean
        ydk::YLeaf dailogbufentries; //type: uint16
        ydk::YLeaf pktstrictval; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class DaivlanItems; //type: System::DhcpItems::InstItems::DaivlanItems
        class DaiifItems; //type: System::DhcpItems::InstItems::DaiifItems
        class ClientifItems; //type: System::DhcpItems::InstItems::ClientifItems
        class RelayifItems; //type: System::DhcpItems::InstItems::RelayifItems
        class ServerifItems; //type: System::DhcpItems::InstItems::ServerifItems
        class SrcifItems; //type: System::DhcpItems::InstItems::SrcifItems
        class V6srcifItems; //type: System::DhcpItems::InstItems::V6srcifItems
        class IpsrcbindipItems; //type: System::DhcpItems::InstItems::IpsrcbindipItems
        class IpsgifItems; //type: System::DhcpItems::InstItems::IpsgifItems
        class IpsgexvlanItems; //type: System::DhcpItems::InstItems::IpsgexvlanItems
        class SnoopvlanItems; //type: System::DhcpItems::InstItems::SnoopvlanItems
        class SnoopifItems; //type: System::DhcpItems::InstItems::SnoopifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaivlanItems> daivlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems> daiif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems> clientif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems> relayif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems> serverif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SrcifItems> srcif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::V6srcifItems> v6srcif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsrcbindipItems> ipsrcbindip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems> ipsgif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgexvlanItems> ipsgexvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopvlanItems> snoopvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems> snoopif_items;
        
}; // System::DhcpItems::InstItems


class System::DhcpItems::InstItems::DaivlanItems : public ydk::Entity
{
    public:
        DaivlanItems();
        ~DaivlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DAIVlanList; //type: System::DhcpItems::InstItems::DaivlanItems::DAIVlanList

        ydk::YList daivlan_list;
        
}; // System::DhcpItems::InstItems::DaivlanItems


class System::DhcpItems::InstItems::DaivlanItems::DAIVlanList : public ydk::Entity
{
    public:
        DAIVlanList();
        ~DAIVlanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf daivlannum; //type: uint16
        ydk::YLeaf dailogtypeonvlan; //type: DhcpDAILogType

}; // System::DhcpItems::InstItems::DaivlanItems::DAIVlanList


class System::DhcpItems::InstItems::DaiifItems : public ydk::Entity
{
    public:
        DaiifItems();
        ~DaiifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DAIIfList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList

        ydk::YList daiif_list;
        
}; // System::DhcpItems::InstItems::DaiifItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList : public ydk::Entity
{
    public:
        DAIIfList();
        ~DAIIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf daienabled; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class ComplexItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems
        class TextItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems
        class IpItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems
        class RtvrfMbrItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems> complex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems> text_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems : public ydk::Entity
{
    public:
        ComplexItems();
        ~ComplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class IpItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems
        class TextItems; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems> text_items;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems


class System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::DhcpItems::InstItems::ClientifItems : public ydk::Entity
{
    public:
        ClientifItems();
        ~ClientifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ClientIfList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList

        ydk::YList clientif_list;
        
}; // System::DhcpItems::InstItems::ClientifItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList : public ydk::Entity
{
    public:
        ClientIfList();
        ~ClientIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf mode; //type: DhcpMode
        ydk::YLeaf vendorid; //type: string
        ydk::YLeaf clientid; //type: string
        ydk::YLeaf reqaddr; //type: string
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf operst; //type: DhcpClIfOperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class AddrItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems
        class Addrv6Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items
        class PseudoIfItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems
        class RespItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems
        class MsgstatsItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::MsgstatsItems
        class ComplexItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems
        class TextItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems
        class IpItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems
        class RspseudoIfItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems
        class RtvrfMbrItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems> addr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items> addrv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems> pseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems> resp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::MsgstatsItems> msgstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems> complex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems> text_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems> rspseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems : public ydk::Entity
{
    public:
        AddrItems();
        ~AddrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientAddrList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList

        ydk::YList clientaddr_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList : public ydk::Entity
{
    public:
        ClientAddrList();
        ~ClientAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items : public ydk::Entity
{
    public:
        Addrv6Items();
        ~Addrv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clientv6AddrList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList

        ydk::YList clientv6addr_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList : public ydk::Entity
{
    public:
        Clientv6AddrList();
        ~Clientv6AddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems : public ydk::Entity
{
    public:
        PseudoIfItems();
        ~PseudoIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PseudoIfList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList

        ydk::YList pseudoif_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList : public ydk::Entity
{
    public:
        PseudoIfList();
        ~PseudoIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf domid; //type: uint32
        ydk::YLeaf ift; //type: L1Layer
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class ComplexItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems
        class TextItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::TextItems
        class IpItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::UbyteItems
        class RtvrfMbrItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems> complex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::TextItems> text_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems : public ydk::Entity
{
    public:
        ComplexItems();
        ~ComplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class IpItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::UbyteItems
        class TextItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::TextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::TextItems> text_items;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::IpItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::IpItems::IpList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::MacItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::MacItems::MacList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint64Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint32Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint16Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::UbyteItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::UbyteItems::UByteList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::TextItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::ComplexItems::ComplexList::TextItems::TextList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::TextItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::TextItems::TextList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::IpItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::IpItems::IpList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::MacItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::MacItems::MacList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint64Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint32Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint16Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::UbyteItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::UbyteItems::UByteList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtvrfMbrItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtnwPathToIfItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::PseudoIfItems::PseudoIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems : public ydk::Entity
{
    public:
        RespItems();
        ~RespItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chaddr; //type: string
        ydk::YLeaf yiaddr; //type: string
        ydk::YLeaf siaddr; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf msgt; //type: DhcpMsgT
        ydk::YLeaf serverid; //type: string
        ydk::YLeaf subnetmask; //type: string
        ydk::YLeaf leasetime; //type: uint16
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf ifid; //type: string
        class IpItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems
        class TextItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems
        class ComplexItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems> text_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems> complex_items;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems : public ydk::Entity
{
    public:
        ComplexItems();
        ~ComplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class IpItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems
        class TextItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems> text_items;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::MsgstatsItems : public ydk::Entity
{
    public:
        MsgstatsItems();
        ~MsgstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MsgStatsList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::MsgstatsItems::MsgStatsList

        ydk::YList msgstats_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::MsgstatsItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::MsgstatsItems::MsgStatsList : public ydk::Entity
{
    public:
        MsgStatsList();
        ~MsgStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: DhcpMsgT
        ydk::YLeaf pktrcvd; //type: uint32
        ydk::YLeaf pktsent; //type: uint32
        ydk::YLeaf pktdrop; //type: uint32

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::MsgstatsItems::MsgStatsList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems : public ydk::Entity
{
    public:
        ComplexItems();
        ~ComplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class IpItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems
        class TextItems; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems> text_items;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList


}
}

#endif /* _CISCO_NX_OS_DEVICE_16_ */

