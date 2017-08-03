#ifndef _MPLS_LDP_GENERIC_STD_MIB_
#define _MPLS_LDP_GENERIC_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_LDP_GENERIC_STD_MIB {

class MplsLdpGenericStdMib : public ydk::Entity
{
    public:
        MplsLdpGenericStdMib();
        ~MplsLdpGenericStdMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Mplsldpentitygenericlrtable; //type: MplsLdpGenericStdMib::Mplsldpentitygenericlrtable

        std::shared_ptr<MPLS_LDP_GENERIC_STD_MIB::MplsLdpGenericStdMib::Mplsldpentitygenericlrtable> mplsldpentitygenericlrtable;
        
}; // MplsLdpGenericStdMib


class MplsLdpGenericStdMib::Mplsldpentitygenericlrtable : public ydk::Entity
{
    public:
        Mplsldpentitygenericlrtable();
        ~Mplsldpentitygenericlrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsldpentitygenericlrentry; //type: MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry

        std::vector<std::shared_ptr<MPLS_LDP_GENERIC_STD_MIB::MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry> > mplsldpentitygenericlrentry;
        
}; // MplsLdpGenericStdMib::Mplsldpentitygenericlrtable


class MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry : public ydk::Entity
{
    public:
        Mplsldpentitygenericlrentry();
        ~Mplsldpentitygenericlrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        ydk::YLeaf mplsldpentitygenericlrmin; //type: uint32
        ydk::YLeaf mplsldpentitygenericlrmax; //type: uint32
        ydk::YLeaf mplsldpentitygenericlabelspace; //type: Mplsldpentitygenericlabelspace
        ydk::YLeaf mplsldpentitygenericifindexorzero; //type: int32
        ydk::YLeaf mplsldpentitygenericlrstoragetype; //type: Storagetype
        ydk::YLeaf mplsldpentitygenericlrrowstatus; //type: Rowstatus
        class Mplsldpentitygenericlabelspace;

}; // MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry

class MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::Mplsldpentitygenericlabelspace : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf perPlatform;
        static const ydk::Enum::YLeaf perInterface;

};


}
}

#endif /* _MPLS_LDP_GENERIC_STD_MIB_ */

