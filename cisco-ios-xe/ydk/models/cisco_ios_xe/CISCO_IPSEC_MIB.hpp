#ifndef _CISCO_IPSEC_MIB_
#define _CISCO_IPSEC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IPSEC_MIB {

class CISCOIPSECMIB : public ydk::Entity
{
    public:
        CISCOIPSECMIB();
        ~CISCOIPSECMIB();

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

        class CipsIsakmpGroup; //type: CISCOIPSECMIB::CipsIsakmpGroup
        class CipsIPsecGlobals; //type: CISCOIPSECMIB::CipsIPsecGlobals
        class CipsIPsecStatistics; //type: CISCOIPSECMIB::CipsIPsecStatistics
        class CipsSysCapacityGroup; //type: CISCOIPSECMIB::CipsSysCapacityGroup
        class CipsTrapCntlGroup; //type: CISCOIPSECMIB::CipsTrapCntlGroup
        class CipsIsakmpPolicyTable; //type: CISCOIPSECMIB::CipsIsakmpPolicyTable
        class CipsStaticCryptomapSetTable; //type: CISCOIPSECMIB::CipsStaticCryptomapSetTable
        class CipsDynamicCryptomapSetTable; //type: CISCOIPSECMIB::CipsDynamicCryptomapSetTable
        class CipsStaticCryptomapTable; //type: CISCOIPSECMIB::CipsStaticCryptomapTable
        class CipsCryptomapSetIfTable; //type: CISCOIPSECMIB::CipsCryptomapSetIfTable

        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsIsakmpGroup> cipsisakmpgroup;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsIPsecGlobals> cipsipsecglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsIPsecStatistics> cipsipsecstatistics;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsSysCapacityGroup> cipssyscapacitygroup;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsTrapCntlGroup> cipstrapcntlgroup;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsIsakmpPolicyTable> cipsisakmppolicytable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsStaticCryptomapSetTable> cipsstaticcryptomapsettable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsDynamicCryptomapSetTable> cipsdynamiccryptomapsettable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsStaticCryptomapTable> cipsstaticcryptomaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsCryptomapSetIfTable> cipscryptomapsetiftable;
        
}; // CISCOIPSECMIB


class CISCOIPSECMIB::CipsIsakmpGroup : public ydk::Entity
{
    public:
        CipsIsakmpGroup();
        ~CipsIsakmpGroup();

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

        ydk::YLeaf cipsisakmpenabled; //type: boolean
        ydk::YLeaf cipsisakmpidentity; //type: IkeIdentityType
        ydk::YLeaf cipsisakmpkeepaliveinterval; //type: int32
        ydk::YLeaf cipsnumisakmppolicies; //type: int32

}; // CISCOIPSECMIB::CipsIsakmpGroup


class CISCOIPSECMIB::CipsIPsecGlobals : public ydk::Entity
{
    public:
        CipsIPsecGlobals();
        ~CipsIPsecGlobals();

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

        ydk::YLeaf cipssalifetime; //type: uint32
        ydk::YLeaf cipssalifesize; //type: uint32
        ydk::YLeaf cipsnumstaticcryptomapsets; //type: uint32
        ydk::YLeaf cipsnumcetcryptomapsets; //type: uint32
        ydk::YLeaf cipsnumdynamiccryptomapsets; //type: uint32
        ydk::YLeaf cipsnumtedcryptomapsets; //type: uint32

}; // CISCOIPSECMIB::CipsIPsecGlobals


class CISCOIPSECMIB::CipsIPsecStatistics : public ydk::Entity
{
    public:
        CipsIPsecStatistics();
        ~CipsIPsecStatistics();

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

        ydk::YLeaf cipsnumtedprobesreceived; //type: uint32
        ydk::YLeaf cipsnumtedprobessent; //type: uint32
        ydk::YLeaf cipsnumtedfailures; //type: uint32

}; // CISCOIPSECMIB::CipsIPsecStatistics


class CISCOIPSECMIB::CipsSysCapacityGroup : public ydk::Entity
{
    public:
        CipsSysCapacityGroup();
        ~CipsSysCapacityGroup();

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

        ydk::YLeaf cipsmaxsas; //type: int32
        ydk::YLeaf cips3descapable; //type: boolean

}; // CISCOIPSECMIB::CipsSysCapacityGroup


class CISCOIPSECMIB::CipsTrapCntlGroup : public ydk::Entity
{
    public:
        CipsTrapCntlGroup();
        ~CipsTrapCntlGroup();

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

        ydk::YLeaf cipscntlisakmppolicyadded; //type: TrapStatus
        ydk::YLeaf cipscntlisakmppolicydeleted; //type: TrapStatus
        ydk::YLeaf cipscntlcryptomapadded; //type: TrapStatus
        ydk::YLeaf cipscntlcryptomapdeleted; //type: TrapStatus
        ydk::YLeaf cipscntlcryptomapsetattached; //type: TrapStatus
        ydk::YLeaf cipscntlcryptomapsetdetached; //type: TrapStatus
        ydk::YLeaf cipscntltoomanysas; //type: TrapStatus

}; // CISCOIPSECMIB::CipsTrapCntlGroup


class CISCOIPSECMIB::CipsIsakmpPolicyTable : public ydk::Entity
{
    public:
        CipsIsakmpPolicyTable();
        ~CipsIsakmpPolicyTable();

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

        class CipsIsakmpPolicyEntry; //type: CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry

        ydk::YList cipsisakmppolicyentry;
        
}; // CISCOIPSECMIB::CipsIsakmpPolicyTable


class CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry : public ydk::Entity
{
    public:
        CipsIsakmpPolicyEntry();
        ~CipsIsakmpPolicyEntry();

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

        ydk::YLeaf cipsisakmppolpriority; //type: int32
        ydk::YLeaf cipsisakmppolencr; //type: EncryptAlgo
        ydk::YLeaf cipsisakmppolhash; //type: IkeHashAlgo
        ydk::YLeaf cipsisakmppolauth; //type: IkeAuthMethod
        ydk::YLeaf cipsisakmppolgroup; //type: DiffHellmanGrp
        ydk::YLeaf cipsisakmppollifetime; //type: int32

}; // CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry


class CISCOIPSECMIB::CipsStaticCryptomapSetTable : public ydk::Entity
{
    public:
        CipsStaticCryptomapSetTable();
        ~CipsStaticCryptomapSetTable();

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

        class CipsStaticCryptomapSetEntry; //type: CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry

        ydk::YList cipsstaticcryptomapsetentry;
        
}; // CISCOIPSECMIB::CipsStaticCryptomapSetTable


class CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry : public ydk::Entity
{
    public:
        CipsStaticCryptomapSetEntry();
        ~CipsStaticCryptomapSetEntry();

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

        ydk::YLeaf cipsstaticcryptomapsetname; //type: string
        ydk::YLeaf cipsstaticcryptomapsetsize; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumisakmp; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnummanual; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumcet; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumdynamic; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumdisc; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumsas; //type: uint32

}; // CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry


class CISCOIPSECMIB::CipsDynamicCryptomapSetTable : public ydk::Entity
{
    public:
        CipsDynamicCryptomapSetTable();
        ~CipsDynamicCryptomapSetTable();

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

        class CipsDynamicCryptomapSetEntry; //type: CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry

        ydk::YList cipsdynamiccryptomapsetentry;
        
}; // CISCOIPSECMIB::CipsDynamicCryptomapSetTable


class CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry : public ydk::Entity
{
    public:
        CipsDynamicCryptomapSetEntry();
        ~CipsDynamicCryptomapSetEntry();

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

        ydk::YLeaf cipsdynamiccryptomapsetname; //type: string
        ydk::YLeaf cipsdynamiccryptomapsetsize; //type: uint32
        ydk::YLeaf cipsdynamiccryptomapsetnumassoc; //type: uint32

}; // CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry


class CISCOIPSECMIB::CipsStaticCryptomapTable : public ydk::Entity
{
    public:
        CipsStaticCryptomapTable();
        ~CipsStaticCryptomapTable();

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

        class CipsStaticCryptomapEntry; //type: CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry

        ydk::YList cipsstaticcryptomapentry;
        
}; // CISCOIPSECMIB::CipsStaticCryptomapTable


class CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry : public ydk::Entity
{
    public:
        CipsStaticCryptomapEntry();
        ~CipsStaticCryptomapEntry();

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

        //type: string (refers to cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::cipsstaticcryptomapsetname)
        ydk::YLeaf cipsstaticcryptomapsetname;
        ydk::YLeaf cipsstaticcryptomappriority; //type: int32
        ydk::YLeaf cipsstaticcryptomaptype; //type: CryptomapType
        ydk::YLeaf cipsstaticcryptomapdescr; //type: string
        ydk::YLeaf cipsstaticcryptomappeer; //type: binary
        ydk::YLeaf cipsstaticcryptomapnumpeers; //type: int32
        ydk::YLeaf cipsstaticcryptomappfs; //type: DiffHellmanGrp
        ydk::YLeaf cipsstaticcryptomaplifetime; //type: int32
        ydk::YLeaf cipsstaticcryptomaplifesize; //type: int32
        ydk::YLeaf cipsstaticcryptomaplevelhost; //type: boolean

}; // CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry


class CISCOIPSECMIB::CipsCryptomapSetIfTable : public ydk::Entity
{
    public:
        CipsCryptomapSetIfTable();
        ~CipsCryptomapSetIfTable();

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

        class CipsCryptomapSetIfEntry; //type: CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry

        ydk::YList cipscryptomapsetifentry;
        
}; // CISCOIPSECMIB::CipsCryptomapSetIfTable


class CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry : public ydk::Entity
{
    public:
        CipsCryptomapSetIfEntry();
        ~CipsCryptomapSetIfEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: string (refers to cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::cipsstaticcryptomapsetname)
        ydk::YLeaf cipsstaticcryptomapsetname;
        ydk::YLeaf cipscryptomapsetifvirtual; //type: boolean
        ydk::YLeaf cipscryptomapsetifstatus; //type: CryptomapSetBindStatus

}; // CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry

class IkeHashAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "md5") return 2;
            if (name == "sha") return 3;
            return -1;
        }
};

class CryptomapType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cryptomapTypeNONE;
        static const ydk::Enum::YLeaf cryptomapTypeMANUAL;
        static const ydk::Enum::YLeaf cryptomapTypeISAKMP;
        static const ydk::Enum::YLeaf cryptomapTypeCET;
        static const ydk::Enum::YLeaf cryptomapTypeDYNAMIC;
        static const ydk::Enum::YLeaf cryptomapTypeDYNAMICDISCOVERY;

        static int get_enum_value(const std::string & name) {
            if (name == "cryptomapTypeNONE") return 0;
            if (name == "cryptomapTypeMANUAL") return 1;
            if (name == "cryptomapTypeISAKMP") return 2;
            if (name == "cryptomapTypeCET") return 3;
            if (name == "cryptomapTypeDYNAMIC") return 4;
            if (name == "cryptomapTypeDYNAMICDISCOVERY") return 5;
            return -1;
        }
};

class IkeIdentityType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isakmpIdTypeUNKNOWN;
        static const ydk::Enum::YLeaf isakmpIdTypeADDRESS;
        static const ydk::Enum::YLeaf isakmpIdTypeHOSTNAME;

        static int get_enum_value(const std::string & name) {
            if (name == "isakmpIdTypeUNKNOWN") return 0;
            if (name == "isakmpIdTypeADDRESS") return 1;
            if (name == "isakmpIdTypeHOSTNAME") return 2;
            return -1;
        }
};

class TrapStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class EncryptAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf des3;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "des") return 2;
            if (name == "des3") return 3;
            return -1;
        }
};

class IkeAuthMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf preSharedKey;
        static const ydk::Enum::YLeaf rsaSig;
        static const ydk::Enum::YLeaf rsaEncrypt;
        static const ydk::Enum::YLeaf revPublicKey;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "preSharedKey") return 2;
            if (name == "rsaSig") return 3;
            if (name == "rsaEncrypt") return 4;
            if (name == "revPublicKey") return 5;
            return -1;
        }
};

class CryptomapSetBindStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf attached;
        static const ydk::Enum::YLeaf detached;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "attached") return 1;
            if (name == "detached") return 2;
            return -1;
        }
};

class DiffHellmanGrp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf dhGroup1;
        static const ydk::Enum::YLeaf dhGroup2;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "dhGroup1") return 2;
            if (name == "dhGroup2") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IPSEC_MIB_ */

