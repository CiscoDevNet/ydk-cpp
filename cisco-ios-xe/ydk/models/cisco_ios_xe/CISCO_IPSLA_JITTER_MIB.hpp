#ifndef _CISCO_IPSLA_JITTER_MIB_
#define _CISCO_IPSLA_JITTER_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IPSLA_JITTER_MIB {

class CISCOIPSLAJITTERMIB : public ydk::Entity
{
    public:
        CISCOIPSLAJITTERMIB();
        ~CISCOIPSLAJITTERMIB();

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

        class CipslaUdpJitterTmplTable; //type: CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable
        class CipslaIcmpJitterTmplTable; //type: CISCOIPSLAJITTERMIB::CipslaIcmpJitterTmplTable

        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_JITTER_MIB::CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable> cipslaudpjittertmpltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_JITTER_MIB::CISCOIPSLAJITTERMIB::CipslaIcmpJitterTmplTable> cipslaicmpjittertmpltable;
        
}; // CISCOIPSLAJITTERMIB


class CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable : public ydk::Entity
{
    public:
        CipslaUdpJitterTmplTable();
        ~CipslaUdpJitterTmplTable();

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

        class CipslaUdpJitterTmplEntry; //type: CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable::CipslaUdpJitterTmplEntry

        ydk::YList cipslaudpjittertmplentry;
        
}; // CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable


class CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable::CipslaUdpJitterTmplEntry : public ydk::Entity
{
    public:
        CipslaUdpJitterTmplEntry();
        ~CipslaUdpJitterTmplEntry();

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

        ydk::YLeaf cipslaudpjittertmplname; //type: string
        ydk::YLeaf cipslaudpjittertmpldescription; //type: string
        ydk::YLeaf cipslaudpjittertmplcontrolenable; //type: boolean
        ydk::YLeaf cipslaudpjittertmpltimeout; //type: uint32
        ydk::YLeaf cipslaudpjittertmplverifydata; //type: boolean
        ydk::YLeaf cipslaudpjittertmplcodectype; //type: IpSlaCodecType
        ydk::YLeaf cipslaudpjittertmplcodecinterval; //type: uint32
        ydk::YLeaf cipslaudpjittertmplcodecpayload; //type: uint32
        ydk::YLeaf cipslaudpjittertmplcodecnumpkts; //type: uint32
        ydk::YLeaf cipslaudpjittertmplinterval; //type: uint32
        ydk::YLeaf cipslaudpjittertmplnumpkts; //type: uint32
        ydk::YLeaf cipslaudpjittertmplsrcaddrtype; //type: InetAddressType
        ydk::YLeaf cipslaudpjittertmplsrcaddr; //type: binary
        ydk::YLeaf cipslaudpjittertmplsrcport; //type: uint16
        ydk::YLeaf cipslaudpjittertmplprecision; //type: CipslaUdpJitterTmplPrecision
        ydk::YLeaf cipslaudpjittertmplreqdatasize; //type: uint32
        ydk::YLeaf cipslaudpjittertmplpktpriority; //type: CipslaUdpJitterTmplPktPriority
        ydk::YLeaf cipslaudpjittertmpltos; //type: uint32
        ydk::YLeaf cipslaudpjittertmplvrfname; //type: string
        ydk::YLeaf cipslaudpjittertmplthreshold; //type: uint32
        ydk::YLeaf cipslaudpjittertmplntptolabs; //type: uint32
        ydk::YLeaf cipslaudpjittertmplntptolpct; //type: uint32
        ydk::YLeaf cipslaudpjittertmplntptoltype; //type: CipslaUdpJitterTmplNTPTolType
        ydk::YLeaf cipslaudpjittertmplicpiffactor; //type: uint32
        ydk::YLeaf cipslaudpjittertmplstatshours; //type: uint32
        ydk::YLeaf cipslaudpjittertmpldistbuckets; //type: uint32
        ydk::YLeaf cipslaudpjittertmpldistinterval; //type: uint32
        ydk::YLeaf cipslaudpjittertmplstoragetype; //type: StorageType
        ydk::YLeaf cipslaudpjittertmplrowstatus; //type: RowStatus
        class CipslaUdpJitterTmplPrecision;
        class CipslaUdpJitterTmplPktPriority;
        class CipslaUdpJitterTmplNTPTolType;

}; // CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable::CipslaUdpJitterTmplEntry


class CISCOIPSLAJITTERMIB::CipslaIcmpJitterTmplTable : public ydk::Entity
{
    public:
        CipslaIcmpJitterTmplTable();
        ~CipslaIcmpJitterTmplTable();

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

        class CipslaIcmpJitterTmplEntry; //type: CISCOIPSLAJITTERMIB::CipslaIcmpJitterTmplTable::CipslaIcmpJitterTmplEntry

        ydk::YList cipslaicmpjittertmplentry;
        
}; // CISCOIPSLAJITTERMIB::CipslaIcmpJitterTmplTable


class CISCOIPSLAJITTERMIB::CipslaIcmpJitterTmplTable::CipslaIcmpJitterTmplEntry : public ydk::Entity
{
    public:
        CipslaIcmpJitterTmplEntry();
        ~CipslaIcmpJitterTmplEntry();

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

        ydk::YLeaf cipslaicmpjittertmplname; //type: string
        ydk::YLeaf cipslaicmpjittertmpldescription; //type: string
        ydk::YLeaf cipslaicmpjittertmpltimeout; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplverifydata; //type: boolean
        ydk::YLeaf cipslaicmpjittertmplnumpkts; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplinterval; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplsrcaddrtype; //type: InetAddressType
        ydk::YLeaf cipslaicmpjittertmplsrcaddr; //type: binary
        ydk::YLeaf cipslaicmpjittertmpltos; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplvrfname; //type: string
        ydk::YLeaf cipslaicmpjittertmplthreshold; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplstatshours; //type: uint32
        ydk::YLeaf cipslaicmpjittertmpldistbuckets; //type: uint32
        ydk::YLeaf cipslaicmpjittertmpldistinterval; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplstoragetype; //type: StorageType
        ydk::YLeaf cipslaicmpjittertmplrowstatus; //type: RowStatus

}; // CISCOIPSLAJITTERMIB::CipslaIcmpJitterTmplTable::CipslaIcmpJitterTmplEntry

class CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable::CipslaUdpJitterTmplEntry::CipslaUdpJitterTmplPrecision : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf microseconds;

        static int get_enum_value(const std::string & name) {
            if (name == "milliseconds") return 1;
            if (name == "microseconds") return 2;
            return -1;
        }
};

class CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable::CipslaUdpJitterTmplEntry::CipslaUdpJitterTmplPktPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf high;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 1;
            if (name == "high") return 2;
            return -1;
        }
};

class CISCOIPSLAJITTERMIB::CipslaUdpJitterTmplTable::CipslaUdpJitterTmplEntry::CipslaUdpJitterTmplNTPTolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf percent;
        static const ydk::Enum::YLeaf absolute;

        static int get_enum_value(const std::string & name) {
            if (name == "percent") return 1;
            if (name == "absolute") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IPSLA_JITTER_MIB_ */

