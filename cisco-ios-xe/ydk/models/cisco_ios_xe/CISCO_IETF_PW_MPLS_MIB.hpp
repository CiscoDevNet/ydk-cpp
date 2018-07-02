#ifndef _CISCO_IETF_PW_MPLS_MIB_
#define _CISCO_IETF_PW_MPLS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_MPLS_MIB {

class CISCOIETFPWMPLSMIB : public ydk::Entity
{
    public:
        CISCOIETFPWMPLSMIB();
        ~CISCOIETFPWMPLSMIB();

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

        class CpwVcMplsObjects; //type: CISCOIETFPWMPLSMIB::CpwVcMplsObjects
        class CpwVcMplsTable; //type: CISCOIETFPWMPLSMIB::CpwVcMplsTable
        class CpwVcMplsOutboundTable; //type: CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable
        class CpwVcMplsInboundTable; //type: CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable
        class CpwVcMplsNonTeMappingTable; //type: CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable
        class CpwVcMplsTeMappingTable; //type: CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MPLS_MIB::CISCOIETFPWMPLSMIB::CpwVcMplsObjects> cpwvcmplsobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MPLS_MIB::CISCOIETFPWMPLSMIB::CpwVcMplsTable> cpwvcmplstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MPLS_MIB::CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable> cpwvcmplsoutboundtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MPLS_MIB::CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable> cpwvcmplsinboundtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MPLS_MIB::CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable> cpwvcmplsnontemappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_MPLS_MIB::CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable> cpwvcmplstemappingtable;
        
}; // CISCOIETFPWMPLSMIB


class CISCOIETFPWMPLSMIB::CpwVcMplsObjects : public ydk::Entity
{
    public:
        CpwVcMplsObjects();
        ~CpwVcMplsObjects();

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

        ydk::YLeaf cpwvcmplsoutboundindexnext; //type: uint32
        ydk::YLeaf cpwvcmplsinboundindexnext; //type: uint32

}; // CISCOIETFPWMPLSMIB::CpwVcMplsObjects


class CISCOIETFPWMPLSMIB::CpwVcMplsTable : public ydk::Entity
{
    public:
        CpwVcMplsTable();
        ~CpwVcMplsTable();

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

        class CpwVcMplsEntry; //type: CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry

        ydk::YList cpwvcmplsentry;
        
}; // CISCOIETFPWMPLSMIB::CpwVcMplsTable


class CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry : public ydk::Entity
{
    public:
        CpwVcMplsEntry();
        ~CpwVcMplsEntry();

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
        ydk::YLeaf cpwvcmplsmplstype; //type: CpwVcMplsMplsType
        ydk::YLeaf cpwvcmplsexpbitsmode; //type: CpwVcMplsExpBitsMode
        ydk::YLeaf cpwvcmplsexpbits; //type: uint32
        ydk::YLeaf cpwvcmplsttl; //type: uint32
        ydk::YLeaf cpwvcmplslocalldpid; //type: string
        ydk::YLeaf cpwvcmplslocalldpentityid; //type: uint32
        ydk::YLeaf cpwvcmplspeerldpid; //type: string
        ydk::YLeaf cpwvcmplsstoragetype; //type: StorageType
        class CpwVcMplsExpBitsMode;

}; // CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry


class CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable : public ydk::Entity
{
    public:
        CpwVcMplsOutboundTable();
        ~CpwVcMplsOutboundTable();

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

        class CpwVcMplsOutboundEntry; //type: CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry

        ydk::YList cpwvcmplsoutboundentry;
        
}; // CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable


class CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry : public ydk::Entity
{
    public:
        CpwVcMplsOutboundEntry();
        ~CpwVcMplsOutboundEntry();

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
        ydk::YLeaf cpwvcmplsoutboundindex; //type: uint32
        ydk::YLeaf cpwvcmplsoutboundlsrxcindex; //type: uint32
        ydk::YLeaf cpwvcmplsoutboundtunnelindex; //type: uint32
        ydk::YLeaf cpwvcmplsoutboundtunnelinstance; //type: uint32
        ydk::YLeaf cpwvcmplsoutboundtunnellcllsr; //type: binary
        ydk::YLeaf cpwvcmplsoutboundtunnelpeerlsr; //type: binary
        ydk::YLeaf cpwvcmplsoutboundifindex; //type: int32
        ydk::YLeaf cpwvcmplsoutboundrowstatus; //type: RowStatus
        ydk::YLeaf cpwvcmplsoutboundstoragetype; //type: StorageType

}; // CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry


class CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable : public ydk::Entity
{
    public:
        CpwVcMplsInboundTable();
        ~CpwVcMplsInboundTable();

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

        class CpwVcMplsInboundEntry; //type: CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry

        ydk::YList cpwvcmplsinboundentry;
        
}; // CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable


class CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry : public ydk::Entity
{
    public:
        CpwVcMplsInboundEntry();
        ~CpwVcMplsInboundEntry();

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
        ydk::YLeaf cpwvcmplsinboundindex; //type: uint32
        ydk::YLeaf cpwvcmplsinboundlsrxcindex; //type: uint32
        ydk::YLeaf cpwvcmplsinboundtunnelindex; //type: uint32
        ydk::YLeaf cpwvcmplsinboundtunnelinstance; //type: uint32
        ydk::YLeaf cpwvcmplsinboundtunnellcllsr; //type: binary
        ydk::YLeaf cpwvcmplsinboundtunnelpeerlsr; //type: binary
        ydk::YLeaf cpwvcmplsinboundifindex; //type: int32
        ydk::YLeaf cpwvcmplsinboundrowstatus; //type: RowStatus
        ydk::YLeaf cpwvcmplsinboundstoragetype; //type: StorageType

}; // CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry


class CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable : public ydk::Entity
{
    public:
        CpwVcMplsNonTeMappingTable();
        ~CpwVcMplsNonTeMappingTable();

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

        class CpwVcMplsNonTeMappingEntry; //type: CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry

        ydk::YList cpwvcmplsnontemappingentry;
        
}; // CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable


class CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry : public ydk::Entity
{
    public:
        CpwVcMplsNonTeMappingEntry();
        ~CpwVcMplsNonTeMappingEntry();

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

        ydk::YLeaf cpwvcmplsnontemappingtunneldirection; //type: CpwVcMplsNonTeMappingTunnelDirection
        ydk::YLeaf cpwvcmplsnontemappingxctunnelindex; //type: uint32
        ydk::YLeaf cpwvcmplsnontemappingifindex; //type: int32
        ydk::YLeaf cpwvcmplsnontemappingvcindex; //type: uint32
        class CpwVcMplsNonTeMappingTunnelDirection;

}; // CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry


class CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable : public ydk::Entity
{
    public:
        CpwVcMplsTeMappingTable();
        ~CpwVcMplsTeMappingTable();

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

        class CpwVcMplsTeMappingEntry; //type: CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry

        ydk::YList cpwvcmplstemappingentry;
        
}; // CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable


class CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry : public ydk::Entity
{
    public:
        CpwVcMplsTeMappingEntry();
        ~CpwVcMplsTeMappingEntry();

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

        ydk::YLeaf cpwvcmplstemappingtunneldirection; //type: CpwVcMplsTeMappingTunnelDirection
        ydk::YLeaf cpwvcmplstemappingtunnelindex; //type: uint32
        ydk::YLeaf cpwvcmplstemappingtunnelinstance; //type: uint32
        ydk::YLeaf cpwvcmplstemappingtunnelpeerlsrid; //type: binary
        ydk::YLeaf cpwvcmplstemappingtunnellocallsrid; //type: binary
        ydk::YLeaf cpwvcmplstemappingvcindex; //type: uint32
        class CpwVcMplsTeMappingTunnelDirection;

}; // CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry

class CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::CpwVcMplsExpBitsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf outerTunnel;
        static const ydk::Enum::YLeaf specifiedValue;
        static const ydk::Enum::YLeaf serviceDependant;

};

class CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::CpwVcMplsNonTeMappingTunnelDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf outbound;
        static const ydk::Enum::YLeaf inbound;

};

class CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::CpwVcMplsTeMappingTunnelDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf outbound;
        static const ydk::Enum::YLeaf inbound;

};


}
}

#endif /* _CISCO_IETF_PW_MPLS_MIB_ */

