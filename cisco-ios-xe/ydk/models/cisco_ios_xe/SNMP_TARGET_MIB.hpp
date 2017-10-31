#ifndef _SNMP_TARGET_MIB_
#define _SNMP_TARGET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
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

        class Snmptargetobjects; //type: SNMPTARGETMIB::Snmptargetobjects
        class Snmptargetaddrtable; //type: SNMPTARGETMIB::Snmptargetaddrtable
        class Snmptargetparamstable; //type: SNMPTARGETMIB::Snmptargetparamstable

        std::shared_ptr<cisco_ios_xe::SNMP_TARGET_MIB::SNMPTARGETMIB::Snmptargetobjects> snmptargetobjects;
        std::shared_ptr<cisco_ios_xe::SNMP_TARGET_MIB::SNMPTARGETMIB::Snmptargetaddrtable> snmptargetaddrtable;
        std::shared_ptr<cisco_ios_xe::SNMP_TARGET_MIB::SNMPTARGETMIB::Snmptargetparamstable> snmptargetparamstable;
        
}; // SNMPTARGETMIB


class SNMPTARGETMIB::Snmptargetobjects : public ydk::Entity
{
    public:
        Snmptargetobjects();
        ~Snmptargetobjects();

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

        ydk::YLeaf snmptargetspinlock; //type: int32
        ydk::YLeaf snmpunavailablecontexts; //type: uint32
        ydk::YLeaf snmpunknowncontexts; //type: uint32

}; // SNMPTARGETMIB::Snmptargetobjects


class SNMPTARGETMIB::Snmptargetaddrtable : public ydk::Entity
{
    public:
        Snmptargetaddrtable();
        ~Snmptargetaddrtable();

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

        class Snmptargetaddrentry; //type: SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::SNMP_TARGET_MIB::SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry> > snmptargetaddrentry;
        
}; // SNMPTARGETMIB::Snmptargetaddrtable


class SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry : public ydk::Entity
{
    public:
        Snmptargetaddrentry();
        ~Snmptargetaddrentry();

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
        ydk::YLeaf snmptargetaddrtaddress; //type: binary
        ydk::YLeaf snmptargetaddrtimeout; //type: int32
        ydk::YLeaf snmptargetaddrretrycount; //type: int32
        ydk::YLeaf snmptargetaddrtaglist; //type: string
        ydk::YLeaf snmptargetaddrparams; //type: string
        ydk::YLeaf snmptargetaddrstoragetype; //type: StorageType
        ydk::YLeaf snmptargetaddrrowstatus; //type: RowStatus

}; // SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry


class SNMPTARGETMIB::Snmptargetparamstable : public ydk::Entity
{
    public:
        Snmptargetparamstable();
        ~Snmptargetparamstable();

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

        class Snmptargetparamsentry; //type: SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry

        std::vector<std::shared_ptr<cisco_ios_xe::SNMP_TARGET_MIB::SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry> > snmptargetparamsentry;
        
}; // SNMPTARGETMIB::Snmptargetparamstable


class SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry : public ydk::Entity
{
    public:
        Snmptargetparamsentry();
        ~Snmptargetparamsentry();

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
        ydk::YLeaf snmptargetparamsrowstatus; //type: RowStatus

}; // SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry


}
}

#endif /* _SNMP_TARGET_MIB_ */

