#ifndef _SNMP_TARGET_MIB_
#define _SNMP_TARGET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace SNMP_TARGET_MIB {

class SNMPTARGETMIB : public ydk::Entity
{
    public:
        SNMPTARGETMIB();
        ~SNMPTARGETMIB();

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

        class SnmpTargetObjects; //type: SNMPTARGETMIB::SnmpTargetObjects
        class SnmpTargetAddrTable; //type: SNMPTARGETMIB::SnmpTargetAddrTable
        class SnmpTargetParamsTable; //type: SNMPTARGETMIB::SnmpTargetParamsTable

        std::shared_ptr<cisco_ios_xr::SNMP_TARGET_MIB::SNMPTARGETMIB::SnmpTargetObjects> snmptargetobjects;
        std::shared_ptr<cisco_ios_xr::SNMP_TARGET_MIB::SNMPTARGETMIB::SnmpTargetAddrTable> snmptargetaddrtable;
        std::shared_ptr<cisco_ios_xr::SNMP_TARGET_MIB::SNMPTARGETMIB::SnmpTargetParamsTable> snmptargetparamstable;
        
}; // SNMPTARGETMIB


class SNMPTARGETMIB::SnmpTargetObjects : public ydk::Entity
{
    public:
        SnmpTargetObjects();
        ~SnmpTargetObjects();

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

        ydk::YLeaf snmpunavailablecontexts; //type: uint32
        ydk::YLeaf snmpunknowncontexts; //type: uint32

}; // SNMPTARGETMIB::SnmpTargetObjects


class SNMPTARGETMIB::SnmpTargetAddrTable : public ydk::Entity
{
    public:
        SnmpTargetAddrTable();
        ~SnmpTargetAddrTable();

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

        class SnmpTargetAddrEntry; //type: SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry

        ydk::YList snmptargetaddrentry;
        
}; // SNMPTARGETMIB::SnmpTargetAddrTable


class SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry : public ydk::Entity
{
    public:
        SnmpTargetAddrEntry();
        ~SnmpTargetAddrEntry();

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

        ydk::YLeaf snmptargetaddrname; //type: string
        ydk::YLeaf snmptargetaddrtdomain; //type: string
        ydk::YLeaf snmptargetaddrtaddress; //type: string
        ydk::YLeaf snmptargetaddrtimeout; //type: int32
        ydk::YLeaf snmptargetaddrretrycount; //type: int32
        ydk::YLeaf snmptargetaddrtaglist; //type: string
        ydk::YLeaf snmptargetaddrparams; //type: string
        ydk::YLeaf snmptargetaddrstoragetype; //type: StorageType
        ydk::YLeaf snmptargetaddrengineid; //type: string
        ydk::YLeaf snmptargetaddrtmask; //type: one of string, union
        ydk::YLeaf snmptargetaddrmms; //type: int32
        ydk::YLeaf enabled; //type: boolean

}; // SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry


class SNMPTARGETMIB::SnmpTargetParamsTable : public ydk::Entity
{
    public:
        SnmpTargetParamsTable();
        ~SnmpTargetParamsTable();

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

        class SnmpTargetParamsEntry; //type: SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry

        ydk::YList snmptargetparamsentry;
        
}; // SNMPTARGETMIB::SnmpTargetParamsTable


class SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry : public ydk::Entity
{
    public:
        SnmpTargetParamsEntry();
        ~SnmpTargetParamsEntry();

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

        ydk::YLeaf snmptargetparamsname; //type: string
        ydk::YLeaf snmptargetparamsmpmodel; //type: int32
        ydk::YLeaf snmptargetparamssecuritymodel; //type: int32
        ydk::YLeaf snmptargetparamssecurityname; //type: string
        ydk::YLeaf snmptargetparamssecuritylevel; //type: SnmpSecurityLevel
        ydk::YLeaf snmptargetparamsstoragetype; //type: StorageType

}; // SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry


}
}

#endif /* _SNMP_TARGET_MIB_ */

