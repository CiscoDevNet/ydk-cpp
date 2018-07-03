#ifndef _CISCO_IETF_PW_MIB_
#define _CISCO_IETF_PW_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_MIB {

class CISCOIETFPWMIB : public ydk::Entity
{
    public:
        CISCOIETFPWMIB();
        ~CISCOIETFPWMIB();

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

        class CpwVcObjects; //type: CISCOIETFPWMIB::CpwVcObjects
        class CpwVcTable; //type: CISCOIETFPWMIB::CpwVcTable
        class CpwVcPerfCurrentTable; //type: CISCOIETFPWMIB::CpwVcPerfCurrentTable
        class CpwVcPerfIntervalTable; //type: CISCOIETFPWMIB::CpwVcPerfIntervalTable
        class CpwVcPerfTotalTable; //type: CISCOIETFPWMIB::CpwVcPerfTotalTable
        class CpwVcIdMappingTable; //type: CISCOIETFPWMIB::CpwVcIdMappingTable
        class CpwVcPeerMappingTable; //type: CISCOIETFPWMIB::CpwVcPeerMappingTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcObjects> cpwvcobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable> cpwvctable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcPerfCurrentTable> cpwvcperfcurrenttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcPerfIntervalTable> cpwvcperfintervaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcPerfTotalTable> cpwvcperftotaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcIdMappingTable> cpwvcidmappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcPeerMappingTable> cpwvcpeermappingtable;
        
}; // CISCOIETFPWMIB


class CISCOIETFPWMIB::CpwVcObjects : public ydk::Entity
{
    public:
        CpwVcObjects();
        ~CpwVcObjects();

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

        ydk::YLeaf cpwvcindexnext; //type: uint32
        ydk::YLeaf cpwvcperftotalerrorpackets; //type: uint64
        ydk::YLeaf cpwvcupdownnotifenable; //type: boolean
        ydk::YLeaf cpwvcnotifrate; //type: uint32

}; // CISCOIETFPWMIB::CpwVcObjects


class CISCOIETFPWMIB::CpwVcTable : public ydk::Entity
{
    public:
        CpwVcTable();
        ~CpwVcTable();

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

        class CpwVcEntry; //type: CISCOIETFPWMIB::CpwVcTable::CpwVcEntry

        ydk::YList cpwvcentry;
        
}; // CISCOIETFPWMIB::CpwVcTable


class CISCOIETFPWMIB::CpwVcTable::CpwVcEntry : public ydk::Entity
{
    public:
        CpwVcEntry();
        ~CpwVcEntry();

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

        ydk::YLeaf cpwvcindex; //type: uint32
        ydk::YLeaf cpwvctype; //type: CpwVcType
        ydk::YLeaf cpwvcowner; //type: CpwVcOwner
        ydk::YLeaf cpwvcpsntype; //type: CpwVcPsnType
        ydk::YLeaf cpwvcsetuppriority; //type: int32
        ydk::YLeaf cpwvcholdingpriority; //type: int32
        ydk::YLeaf cpwvcinboundmode; //type: CpwVcInboundMode
        ydk::YLeaf cpwvcpeeraddrtype; //type: InetAddressType
        ydk::YLeaf cpwvcpeeraddr; //type: binary
        ydk::YLeaf cpwvcid; //type: uint32
        ydk::YLeaf cpwvclocalgroupid; //type: uint32
        ydk::YLeaf cpwvccontrolword; //type: boolean
        ydk::YLeaf cpwvclocalifmtu; //type: uint32
        ydk::YLeaf cpwvclocalifstring; //type: boolean
        ydk::YLeaf cpwvcremotegroupid; //type: uint32
        ydk::YLeaf cpwvcremotecontrolword; //type: CpwVcRemoteControlWord
        ydk::YLeaf cpwvcremoteifmtu; //type: uint32
        ydk::YLeaf cpwvcremoteifstring; //type: string
        ydk::YLeaf cpwvcoutboundvclabel; //type: uint32
        ydk::YLeaf cpwvcinboundvclabel; //type: uint32
        ydk::YLeaf cpwvcname; //type: string
        ydk::YLeaf cpwvcdescr; //type: string
        ydk::YLeaf cpwvccreatetime; //type: uint32
        ydk::YLeaf cpwvcuptime; //type: uint32
        ydk::YLeaf cpwvcadminstatus; //type: CpwVcAdminStatus
        ydk::YLeaf cpwvcoperstatus; //type: CpwOperStatus
        ydk::YLeaf cpwvcinboundoperstatus; //type: CpwOperStatus
        ydk::YLeaf cpwvcoutboundoperstatus; //type: CpwOperStatus
        ydk::YLeaf cpwvctimeelapsed; //type: int32
        ydk::YLeaf cpwvcvalidintervals; //type: int32
        ydk::YLeaf cpwvcrowstatus; //type: RowStatus
        ydk::YLeaf cpwvcstoragetype; //type: StorageType
        class CpwVcOwner;
        class CpwVcPsnType;
        class CpwVcInboundMode;
        class CpwVcRemoteControlWord;
        class CpwVcAdminStatus;

}; // CISCOIETFPWMIB::CpwVcTable::CpwVcEntry


class CISCOIETFPWMIB::CpwVcPerfCurrentTable : public ydk::Entity
{
    public:
        CpwVcPerfCurrentTable();
        ~CpwVcPerfCurrentTable();

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

        class CpwVcPerfCurrentEntry; //type: CISCOIETFPWMIB::CpwVcPerfCurrentTable::CpwVcPerfCurrentEntry

        ydk::YList cpwvcperfcurrententry;
        
}; // CISCOIETFPWMIB::CpwVcPerfCurrentTable


class CISCOIETFPWMIB::CpwVcPerfCurrentTable::CpwVcPerfCurrentEntry : public ydk::Entity
{
    public:
        CpwVcPerfCurrentEntry();
        ~CpwVcPerfCurrentEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcperfcurrentinhcpackets; //type: uint64
        ydk::YLeaf cpwvcperfcurrentinhcbytes; //type: uint64
        ydk::YLeaf cpwvcperfcurrentouthcpackets; //type: uint64
        ydk::YLeaf cpwvcperfcurrentouthcbytes; //type: uint64

}; // CISCOIETFPWMIB::CpwVcPerfCurrentTable::CpwVcPerfCurrentEntry


class CISCOIETFPWMIB::CpwVcPerfIntervalTable : public ydk::Entity
{
    public:
        CpwVcPerfIntervalTable();
        ~CpwVcPerfIntervalTable();

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

        class CpwVcPerfIntervalEntry; //type: CISCOIETFPWMIB::CpwVcPerfIntervalTable::CpwVcPerfIntervalEntry

        ydk::YList cpwvcperfintervalentry;
        
}; // CISCOIETFPWMIB::CpwVcPerfIntervalTable


class CISCOIETFPWMIB::CpwVcPerfIntervalTable::CpwVcPerfIntervalEntry : public ydk::Entity
{
    public:
        CpwVcPerfIntervalEntry();
        ~CpwVcPerfIntervalEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcperfintervalnumber; //type: int32
        ydk::YLeaf cpwvcperfintervalvaliddata; //type: boolean
        ydk::YLeaf cpwvcperfintervaltimeelapsed; //type: int32
        ydk::YLeaf cpwvcperfintervalinhcpackets; //type: uint64
        ydk::YLeaf cpwvcperfintervalinhcbytes; //type: uint64
        ydk::YLeaf cpwvcperfintervalouthcpackets; //type: uint64
        ydk::YLeaf cpwvcperfintervalouthcbytes; //type: uint64

}; // CISCOIETFPWMIB::CpwVcPerfIntervalTable::CpwVcPerfIntervalEntry


class CISCOIETFPWMIB::CpwVcPerfTotalTable : public ydk::Entity
{
    public:
        CpwVcPerfTotalTable();
        ~CpwVcPerfTotalTable();

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

        class CpwVcPerfTotalEntry; //type: CISCOIETFPWMIB::CpwVcPerfTotalTable::CpwVcPerfTotalEntry

        ydk::YList cpwvcperftotalentry;
        
}; // CISCOIETFPWMIB::CpwVcPerfTotalTable


class CISCOIETFPWMIB::CpwVcPerfTotalTable::CpwVcPerfTotalEntry : public ydk::Entity
{
    public:
        CpwVcPerfTotalEntry();
        ~CpwVcPerfTotalEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcperftotalinhcpackets; //type: uint64
        ydk::YLeaf cpwvcperftotalinhcbytes; //type: uint64
        ydk::YLeaf cpwvcperftotalouthcpackets; //type: uint64
        ydk::YLeaf cpwvcperftotalouthcbytes; //type: uint64
        ydk::YLeaf cpwvcperftotaldiscontinuitytime; //type: uint32

}; // CISCOIETFPWMIB::CpwVcPerfTotalTable::CpwVcPerfTotalEntry


class CISCOIETFPWMIB::CpwVcIdMappingTable : public ydk::Entity
{
    public:
        CpwVcIdMappingTable();
        ~CpwVcIdMappingTable();

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

        class CpwVcIdMappingEntry; //type: CISCOIETFPWMIB::CpwVcIdMappingTable::CpwVcIdMappingEntry

        ydk::YList cpwvcidmappingentry;
        
}; // CISCOIETFPWMIB::CpwVcIdMappingTable


class CISCOIETFPWMIB::CpwVcIdMappingTable::CpwVcIdMappingEntry : public ydk::Entity
{
    public:
        CpwVcIdMappingEntry();
        ~CpwVcIdMappingEntry();

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

        ydk::YLeaf cpwvcidmappingvctype; //type: CpwVcType
        ydk::YLeaf cpwvcidmappingvcid; //type: uint32
        ydk::YLeaf cpwvcidmappingpeeraddrtype; //type: InetAddressType
        ydk::YLeaf cpwvcidmappingpeeraddr; //type: binary
        ydk::YLeaf cpwvcidmappingvcindex; //type: uint32

}; // CISCOIETFPWMIB::CpwVcIdMappingTable::CpwVcIdMappingEntry


class CISCOIETFPWMIB::CpwVcPeerMappingTable : public ydk::Entity
{
    public:
        CpwVcPeerMappingTable();
        ~CpwVcPeerMappingTable();

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

        class CpwVcPeerMappingEntry; //type: CISCOIETFPWMIB::CpwVcPeerMappingTable::CpwVcPeerMappingEntry

        ydk::YList cpwvcpeermappingentry;
        
}; // CISCOIETFPWMIB::CpwVcPeerMappingTable


class CISCOIETFPWMIB::CpwVcPeerMappingTable::CpwVcPeerMappingEntry : public ydk::Entity
{
    public:
        CpwVcPeerMappingEntry();
        ~CpwVcPeerMappingEntry();

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

        ydk::YLeaf cpwvcpeermappingpeeraddrtype; //type: InetAddressType
        ydk::YLeaf cpwvcpeermappingpeeraddr; //type: binary
        ydk::YLeaf cpwvcpeermappingvctype; //type: CpwVcType
        ydk::YLeaf cpwvcpeermappingvcid; //type: uint32
        ydk::YLeaf cpwvcpeermappingvcindex; //type: uint32

}; // CISCOIETFPWMIB::CpwVcPeerMappingTable::CpwVcPeerMappingEntry

class CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::CpwVcOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf maintenanceProtocol;
        static const ydk::Enum::YLeaf other;

};

class CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::CpwVcPsnType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf mplsOverIp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf other;

};

class CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::CpwVcInboundMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loose;
        static const ydk::Enum::YLeaf strict;

};

class CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::CpwVcRemoteControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noControlWord;
        static const ydk::Enum::YLeaf withControlWord;
        static const ydk::Enum::YLeaf notYetKnown;

};

class CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::CpwVcAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};


}
}

#endif /* _CISCO_IETF_PW_MIB_ */

