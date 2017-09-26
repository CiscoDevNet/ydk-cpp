#ifndef _MPLS_LDP_GENERIC_STD_MIB_
#define _MPLS_LDP_GENERIC_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_LDP_GENERIC_STD_MIB {

class MPLSLDPGENERICSTDMIB : public ydk::Entity
{
    public:
        MPLSLDPGENERICSTDMIB();
        ~MPLSLDPGENERICSTDMIB();

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

        class Mplsldpentitygenericlrtable; //type: MPLSLDPGENERICSTDMIB::Mplsldpentitygenericlrtable

        std::shared_ptr<cisco_ios_xe::MPLS_LDP_GENERIC_STD_MIB::MPLSLDPGENERICSTDMIB::Mplsldpentitygenericlrtable> mplsldpentitygenericlrtable;
        
}; // MPLSLDPGENERICSTDMIB


class MPLSLDPGENERICSTDMIB::Mplsldpentitygenericlrtable : public ydk::Entity
{
    public:
        Mplsldpentitygenericlrtable();
        ~Mplsldpentitygenericlrtable();

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

        class Mplsldpentitygenericlrentry; //type: MPLSLDPGENERICSTDMIB::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LDP_GENERIC_STD_MIB::MPLSLDPGENERICSTDMIB::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry> > mplsldpentitygenericlrentry;
        
}; // MPLSLDPGENERICSTDMIB::Mplsldpentitygenericlrtable


class MPLSLDPGENERICSTDMIB::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry : public ydk::Entity
{
    public:
        Mplsldpentitygenericlrentry();
        ~Mplsldpentitygenericlrentry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        ydk::YLeaf mplsldpentitygenericlrmin; //type: uint32
        ydk::YLeaf mplsldpentitygenericlrmax; //type: uint32
        ydk::YLeaf mplsldpentitygenericlabelspace; //type: Mplsldpentitygenericlabelspace
        ydk::YLeaf mplsldpentitygenericifindexorzero; //type: int32
        ydk::YLeaf mplsldpentitygenericlrstoragetype; //type: StorageType
        ydk::YLeaf mplsldpentitygenericlrrowstatus; //type: RowStatus
        class Mplsldpentitygenericlabelspace;

}; // MPLSLDPGENERICSTDMIB::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry

class MPLSLDPGENERICSTDMIB::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::Mplsldpentitygenericlabelspace : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf perPlatform;
        static const ydk::Enum::YLeaf perInterface;

};


}
}

#endif /* _MPLS_LDP_GENERIC_STD_MIB_ */

