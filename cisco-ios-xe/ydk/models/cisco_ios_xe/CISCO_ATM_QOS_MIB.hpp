#ifndef _CISCO_ATM_QOS_MIB_
#define _CISCO_ATM_QOS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_ATM_QOS_MIB {

class CISCOATMQOSMIB : public ydk::Entity
{
    public:
        CISCOATMQOSMIB();
        ~CISCOATMQOSMIB();

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

        class CaqVccParamsTable; //type: CISCOATMQOSMIB::CaqVccParamsTable
        class CaqVpcParamsTable; //type: CISCOATMQOSMIB::CaqVpcParamsTable
        class CaqQueuingParamsTable; //type: CISCOATMQOSMIB::CaqQueuingParamsTable
        class CaqQueuingParamsClassTable; //type: CISCOATMQOSMIB::CaqQueuingParamsClassTable

        std::shared_ptr<cisco_ios_xe::CISCO_ATM_QOS_MIB::CISCOATMQOSMIB::CaqVccParamsTable> caqvccparamstable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_QOS_MIB::CISCOATMQOSMIB::CaqVpcParamsTable> caqvpcparamstable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_QOS_MIB::CISCOATMQOSMIB::CaqQueuingParamsTable> caqqueuingparamstable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_QOS_MIB::CISCOATMQOSMIB::CaqQueuingParamsClassTable> caqqueuingparamsclasstable;
        
}; // CISCOATMQOSMIB


class CISCOATMQOSMIB::CaqVccParamsTable : public ydk::Entity
{
    public:
        CaqVccParamsTable();
        ~CaqVccParamsTable();

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

        class CaqVccParamsEntry; //type: CISCOATMQOSMIB::CaqVccParamsTable::CaqVccParamsEntry

        ydk::YList caqvccparamsentry;
        
}; // CISCOATMQOSMIB::CaqVccParamsTable


class CISCOATMQOSMIB::CaqVccParamsTable::CaqVccParamsEntry : public ydk::Entity
{
    public:
        CaqVccParamsEntry();
        ~CaqVccParamsEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf caqvccparamstype; //type: AtmServiceCategory
        ydk::YLeaf caqvccparamspcrin0; //type: uint32
        ydk::YLeaf caqvccparamspcrin01; //type: uint32
        ydk::YLeaf caqvccparamspcrout0; //type: uint32
        ydk::YLeaf caqvccparamspcrout01; //type: uint32
        ydk::YLeaf caqvccparamsscrin0; //type: uint32
        ydk::YLeaf caqvccparamsscrin01; //type: uint32
        ydk::YLeaf caqvccparamsscrout0; //type: uint32
        ydk::YLeaf caqvccparamsscrout01; //type: uint32
        ydk::YLeaf caqvccparamsbcsin0; //type: uint32
        ydk::YLeaf caqvccparamsbcsin01; //type: uint32
        ydk::YLeaf caqvccparamsbcsout0; //type: uint32
        ydk::YLeaf caqvccparamsbcsout01; //type: uint32
        ydk::YLeaf caqvccparamsinheritlevel; //type: VcParamConfigLocation
        ydk::YLeaf caqvccparamsmcrin; //type: uint32
        ydk::YLeaf caqvccparamsmcrout; //type: uint32
        ydk::YLeaf caqvccparamsinvrdf; //type: uint32
        ydk::YLeaf caqvccparamsinvrif; //type: uint32
        ydk::YLeaf caqvccparamsrfl; //type: VcParamConfigLocation
        ydk::YLeaf caqvccparamscdv; //type: uint32
        ydk::YLeaf caqvccparamscdvt; //type: uint32
        ydk::YLeaf caqvccparamsicr; //type: uint32
        ydk::YLeaf caqvccparamstbe; //type: uint32
        ydk::YLeaf caqvccparamsfrtt; //type: uint32
        ydk::YLeaf caqvccparamsnrm; //type: uint32
        ydk::YLeaf caqvccparamsinvtrm; //type: uint32
        ydk::YLeaf caqvccparamsinvcdf; //type: uint32
        ydk::YLeaf caqvccparamsadtf; //type: uint32

}; // CISCOATMQOSMIB::CaqVccParamsTable::CaqVccParamsEntry


class CISCOATMQOSMIB::CaqVpcParamsTable : public ydk::Entity
{
    public:
        CaqVpcParamsTable();
        ~CaqVpcParamsTable();

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

        class CaqVpcParamsEntry; //type: CISCOATMQOSMIB::CaqVpcParamsTable::CaqVpcParamsEntry

        ydk::YList caqvpcparamsentry;
        
}; // CISCOATMQOSMIB::CaqVpcParamsTable


class CISCOATMQOSMIB::CaqVpcParamsTable::CaqVpcParamsEntry : public ydk::Entity
{
    public:
        CaqVpcParamsEntry();
        ~CaqVpcParamsEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVplTable::AtmVplEntry::atmvplvpi)
        ydk::YLeaf atmvplvpi;
        ydk::YLeaf caqvpcparamsvpstate; //type: VpState
        ydk::YLeaf caqvpcparamspeakrate; //type: uint32
        ydk::YLeaf caqvpcparamscesrate; //type: uint32
        ydk::YLeaf caqvpcparamsdatavccount; //type: int32
        ydk::YLeaf caqvpcparamscesvccount; //type: int32
        ydk::YLeaf caqvpcparamsvcdf4seg; //type: int32
        ydk::YLeaf caqvpcparamsvcdf4ete; //type: int32
        ydk::YLeaf caqvpcparamsscr; //type: uint32
        ydk::YLeaf caqvpcparamsmbs; //type: uint32
        ydk::YLeaf caqvpcparamsavailbw; //type: uint32

}; // CISCOATMQOSMIB::CaqVpcParamsTable::CaqVpcParamsEntry


class CISCOATMQOSMIB::CaqQueuingParamsTable : public ydk::Entity
{
    public:
        CaqQueuingParamsTable();
        ~CaqQueuingParamsTable();

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

        class CaqQueuingParamsEntry; //type: CISCOATMQOSMIB::CaqQueuingParamsTable::CaqQueuingParamsEntry

        ydk::YList caqqueuingparamsentry;
        
}; // CISCOATMQOSMIB::CaqQueuingParamsTable


class CISCOATMQOSMIB::CaqQueuingParamsTable::CaqQueuingParamsEntry : public ydk::Entity
{
    public:
        CaqQueuingParamsEntry();
        ~CaqQueuingParamsEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf caqqueuingparamsmeanqdepth; //type: uint32

}; // CISCOATMQOSMIB::CaqQueuingParamsTable::CaqQueuingParamsEntry


class CISCOATMQOSMIB::CaqQueuingParamsClassTable : public ydk::Entity
{
    public:
        CaqQueuingParamsClassTable();
        ~CaqQueuingParamsClassTable();

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

        class CaqQueuingParamsClassEntry; //type: CISCOATMQOSMIB::CaqQueuingParamsClassTable::CaqQueuingParamsClassEntry

        ydk::YList caqqueuingparamsclassentry;
        
}; // CISCOATMQOSMIB::CaqQueuingParamsClassTable


class CISCOATMQOSMIB::CaqQueuingParamsClassTable::CaqQueuingParamsClassEntry : public ydk::Entity
{
    public:
        CaqQueuingParamsClassEntry();
        ~CaqQueuingParamsClassEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf caqqueuingparamsclassindex; //type: int32
        ydk::YLeaf caqqueuingparamsclassranddrp; //type: uint32
        ydk::YLeaf caqqueuingparamsclasstaildrp; //type: uint32
        ydk::YLeaf caqqueuingparamsclassminthre; //type: uint32
        ydk::YLeaf caqqueuingparamsclassmaxthre; //type: uint32
        ydk::YLeaf caqqueuingparamsclassmrkprob; //type: uint32

}; // CISCOATMQOSMIB::CaqQueuingParamsClassTable::CaqQueuingParamsClassEntry

class VcParamConfigLocation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf configDefault;
        static const ydk::Enum::YLeaf configVcDirect;
        static const ydk::Enum::YLeaf configVcClass;
        static const ydk::Enum::YLeaf configVcClassSubInterface;
        static const ydk::Enum::YLeaf configVcClassInterface;

        static int get_enum_value(const std::string & name) {
            if (name == "configDefault") return 1;
            if (name == "configVcDirect") return 2;
            if (name == "configVcClass") return 3;
            if (name == "configVcClassSubInterface") return 4;
            if (name == "configVcClassInterface") return 5;
            return -1;
        }
};

class VpState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vpStateInactive;
        static const ydk::Enum::YLeaf vpStateActive;

        static int get_enum_value(const std::string & name) {
            if (name == "vpStateInactive") return 1;
            if (name == "vpStateActive") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_ATM_QOS_MIB_ */

