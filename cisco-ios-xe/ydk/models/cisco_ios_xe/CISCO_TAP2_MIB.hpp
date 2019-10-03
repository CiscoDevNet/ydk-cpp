#ifndef _CISCO_TAP2_MIB_
#define _CISCO_TAP2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_TAP2_MIB {

class CISCOTAP2MIB : public ydk::Entity
{
    public:
        CISCOTAP2MIB();
        ~CISCOTAP2MIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class CTap2MediationGroup; //type: CISCOTAP2MIB::CTap2MediationGroup
        class CTap2DebugGroup; //type: CISCOTAP2MIB::CTap2DebugGroup
        class CTap2MediationTable; //type: CISCOTAP2MIB::CTap2MediationTable
        class CTap2StreamTable; //type: CISCOTAP2MIB::CTap2StreamTable
        class CTap2DebugTable; //type: CISCOTAP2MIB::CTap2DebugTable
        class CTap2DebugUserTable; //type: CISCOTAP2MIB::CTap2DebugUserTable

        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::CTap2MediationGroup> ctap2mediationgroup;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::CTap2DebugGroup> ctap2debuggroup;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::CTap2MediationTable> ctap2mediationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::CTap2StreamTable> ctap2streamtable;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::CTap2DebugTable> ctap2debugtable;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::CTap2DebugUserTable> ctap2debugusertable;
        
}; // CISCOTAP2MIB


class CISCOTAP2MIB::CTap2MediationGroup : public ydk::Entity
{
    public:
        CTap2MediationGroup();
        ~CTap2MediationGroup();

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

        ydk::YLeaf ctap2mediationnewindex; //type: int32
        ydk::YLeaf ctap2mediationcapabilities; //type: CTap2MediationCapabilities

}; // CISCOTAP2MIB::CTap2MediationGroup


class CISCOTAP2MIB::CTap2DebugGroup : public ydk::Entity
{
    public:
        CTap2DebugGroup();
        ~CTap2DebugGroup();

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

        ydk::YLeaf ctap2debugage; //type: int32
        ydk::YLeaf ctap2debugmaxentries; //type: int32

}; // CISCOTAP2MIB::CTap2DebugGroup


class CISCOTAP2MIB::CTap2MediationTable : public ydk::Entity
{
    public:
        CTap2MediationTable();
        ~CTap2MediationTable();

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

        class CTap2MediationEntry; //type: CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry

        ydk::YList ctap2mediationentry;
        
}; // CISCOTAP2MIB::CTap2MediationTable


class CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry : public ydk::Entity
{
    public:
        CTap2MediationEntry();
        ~CTap2MediationEntry();

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

        ydk::YLeaf ctap2mediationcontentid; //type: int32
        ydk::YLeaf ctap2mediationdestaddresstype; //type: InetAddressType
        ydk::YLeaf ctap2mediationdestaddress; //type: binary
        ydk::YLeaf ctap2mediationdestport; //type: uint16
        ydk::YLeaf ctap2mediationsrcinterface; //type: int32
        ydk::YLeaf ctap2mediationrtcpport; //type: uint16
        ydk::YLeaf ctap2mediationdscp; //type: int32
        ydk::YLeaf ctap2mediationdatatype; //type: int32
        ydk::YLeaf ctap2mediationretransmittype; //type: int32
        ydk::YLeaf ctap2mediationtimeout; //type: string
        ydk::YLeaf ctap2mediationtransport; //type: CTap2MediationTransport
        ydk::YLeaf ctap2mediationnotificationenable; //type: boolean
        ydk::YLeaf ctap2mediationstatus; //type: RowStatus
        ydk::YLeaf ctap2mediationradiuskey; //type: binary
        class CTap2MediationTransport;

}; // CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry


class CISCOTAP2MIB::CTap2StreamTable : public ydk::Entity
{
    public:
        CTap2StreamTable();
        ~CTap2StreamTable();

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

        class CTap2StreamEntry; //type: CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry

        ydk::YList ctap2streamentry;
        
}; // CISCOTAP2MIB::CTap2StreamTable


class CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry : public ydk::Entity
{
    public:
        CTap2StreamEntry();
        ~CTap2StreamEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::ctap2mediationcontentid)
        ydk::YLeaf ctap2mediationcontentid;
        ydk::YLeaf ctap2streamindex; //type: int32
        ydk::YLeaf ctap2streamtype; //type: CTap2StreamType
        ydk::YLeaf ctap2streaminterceptenable; //type: boolean
        ydk::YLeaf ctap2streaminterceptedpackets; //type: uint32
        ydk::YLeaf ctap2streaminterceptdrops; //type: uint32
        ydk::YLeaf ctap2streamstatus; //type: RowStatus
        ydk::YLeaf ctap2streaminterceptedhcpackets; //type: uint64
        ydk::YLeaf ctap2streamintercepthcdrops; //type: uint64
        class CTap2StreamType;

}; // CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry


class CISCOTAP2MIB::CTap2DebugTable : public ydk::Entity
{
    public:
        CTap2DebugTable();
        ~CTap2DebugTable();

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

        class CTap2DebugEntry; //type: CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry

        ydk::YList ctap2debugentry;
        
}; // CISCOTAP2MIB::CTap2DebugTable


class CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry : public ydk::Entity
{
    public:
        CTap2DebugEntry();
        ~CTap2DebugEntry();

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

        ydk::YLeaf ctap2debugindex; //type: int32
        ydk::YLeaf ctap2debugmediationid; //type: uint32
        ydk::YLeaf ctap2debugstreamid; //type: uint32
        ydk::YLeaf ctap2debugmessage; //type: string
        ydk::YLeaf ctap2debugstatus; //type: RowStatus

}; // CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry


class CISCOTAP2MIB::CTap2DebugUserTable : public ydk::Entity
{
    public:
        CTap2DebugUserTable();
        ~CTap2DebugUserTable();

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

        class CTap2DebugUserEntry; //type: CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry

        ydk::YList ctap2debuguserentry;
        
}; // CISCOTAP2MIB::CTap2DebugUserTable


class CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry : public ydk::Entity
{
    public:
        CTap2DebugUserEntry();
        ~CTap2DebugUserEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::ctap2mediationcontentid)
        ydk::YLeaf ctap2mediationcontentid;
        ydk::YLeaf ctap2debugusername; //type: string
        ydk::YLeaf ctap2debugusertimeout; //type: string
        ydk::YLeaf ctap2debuguserstoragetype; //type: StorageType
        ydk::YLeaf ctap2debuguserstatus; //type: RowStatus

}; // CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry

class CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::CTap2MediationTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf rtpNack;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf rtp;
        static const ydk::Enum::YLeaf radius;

        static int get_enum_value(const std::string & name) {
            if (name == "udp") return 1;
            if (name == "rtpNack") return 2;
            if (name == "tcp") return 3;
            if (name == "sctp") return 4;
            if (name == "rtp") return 5;
            if (name == "radius") return 6;
            return -1;
        }
};

class CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::CTap2StreamType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf userConnection;
        static const ydk::Enum::YLeaf msPdsn;
        static const ydk::Enum::YLeaf mobility;
        static const ydk::Enum::YLeaf voip;

        static int get_enum_value(const std::string & name) {
            if (name == "ip") return 1;
            if (name == "mac") return 2;
            if (name == "userConnection") return 3;
            if (name == "msPdsn") return 4;
            if (name == "mobility") return 5;
            if (name == "voip") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_TAP2_MIB_ */

