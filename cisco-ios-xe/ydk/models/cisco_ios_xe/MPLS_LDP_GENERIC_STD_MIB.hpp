#ifndef _MPLS_LDP_GENERIC_STD_MIB_
#define _MPLS_LDP_GENERIC_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace MPLS_LDP_GENERIC_STD_MIB {

class MplsLdpGenericStdMib : public Entity
{
    public:
        MplsLdpGenericStdMib();
        ~MplsLdpGenericStdMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Mplsldpentitygenericlrtable; //type: MplsLdpGenericStdMib::Mplsldpentitygenericlrtable

        std::shared_ptr<MPLS_LDP_GENERIC_STD_MIB::MplsLdpGenericStdMib::Mplsldpentitygenericlrtable> mplsldpentitygenericlrtable;
        
}; // MplsLdpGenericStdMib


class MplsLdpGenericStdMib::Mplsldpentitygenericlrtable : public Entity
{
    public:
        Mplsldpentitygenericlrtable();
        ~Mplsldpentitygenericlrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsldpentitygenericlrentry; //type: MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry

        std::vector<std::shared_ptr<MPLS_LDP_GENERIC_STD_MIB::MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry> > mplsldpentitygenericlrentry;
        
}; // MplsLdpGenericStdMib::Mplsldpentitygenericlrtable


class MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry : public Entity
{
    public:
        Mplsldpentitygenericlrentry();
        ~Mplsldpentitygenericlrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        YLeaf mplsldpentityindex;
        YLeaf mplsldpentitygenericlrmin; //type: uint32
        YLeaf mplsldpentitygenericlrmax; //type: uint32
        YLeaf mplsldpentitygenericlabelspace; //type: MplsldpentitygenericlabelspaceEnum
        YLeaf mplsldpentitygenericifindexorzero; //type: int32
        YLeaf mplsldpentitygenericlrstoragetype; //type: StoragetypeEnum
        YLeaf mplsldpentitygenericlrrowstatus; //type: RowstatusEnum
        class MplsldpentitygenericlabelspaceEnum;

}; // MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry

class MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::MplsldpentitygenericlabelspaceEnum : public Enum
{
    public:
        static const Enum::YLeaf perPlatform;
        static const Enum::YLeaf perInterface;

};


}
}

#endif /* _MPLS_LDP_GENERIC_STD_MIB_ */

