#ifndef _ETHER_WIS_
#define _ETHER_WIS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ETHER_WIS {

class ETHERWIS : public ydk::Entity
{
    public:
        ETHERWIS();
        ~ETHERWIS();

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

        class EtherWisDeviceTable; //type: ETHERWIS::EtherWisDeviceTable
        class EtherWisSectionCurrentTable; //type: ETHERWIS::EtherWisSectionCurrentTable
        class EtherWisPathCurrentTable; //type: ETHERWIS::EtherWisPathCurrentTable
        class EtherWisFarEndPathCurrentTable; //type: ETHERWIS::EtherWisFarEndPathCurrentTable

        std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::EtherWisDeviceTable> etherwisdevicetable;
        std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::EtherWisSectionCurrentTable> etherwissectioncurrenttable;
        std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::EtherWisPathCurrentTable> etherwispathcurrenttable;
        std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::EtherWisFarEndPathCurrentTable> etherwisfarendpathcurrenttable;
        
}; // ETHERWIS


class ETHERWIS::EtherWisDeviceTable : public ydk::Entity
{
    public:
        EtherWisDeviceTable();
        ~EtherWisDeviceTable();

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

        class EtherWisDeviceEntry; //type: ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry

        ydk::YList etherwisdeviceentry;
        
}; // ETHERWIS::EtherWisDeviceTable


class ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry : public ydk::Entity
{
    public:
        EtherWisDeviceEntry();
        ~EtherWisDeviceEntry();

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
        ydk::YLeaf etherwisdevicetxtestpatternmode; //type: EtherWisDeviceTxTestPatternMode
        ydk::YLeaf etherwisdevicerxtestpatternmode; //type: EtherWisDeviceRxTestPatternMode
        ydk::YLeaf etherwisdevicerxtestpatternerrors; //type: uint32
        class EtherWisDeviceTxTestPatternMode;
        class EtherWisDeviceRxTestPatternMode;

}; // ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry


class ETHERWIS::EtherWisSectionCurrentTable : public ydk::Entity
{
    public:
        EtherWisSectionCurrentTable();
        ~EtherWisSectionCurrentTable();

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

        class EtherWisSectionCurrentEntry; //type: ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry

        ydk::YList etherwissectioncurrententry;
        
}; // ETHERWIS::EtherWisSectionCurrentTable


class ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry : public ydk::Entity
{
    public:
        EtherWisSectionCurrentEntry();
        ~EtherWisSectionCurrentEntry();

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
        ydk::YLeaf etherwissectioncurrentj0transmitted; //type: binary
        ydk::YLeaf etherwissectioncurrentj0received; //type: binary

}; // ETHERWIS::EtherWisSectionCurrentTable::EtherWisSectionCurrentEntry


class ETHERWIS::EtherWisPathCurrentTable : public ydk::Entity
{
    public:
        EtherWisPathCurrentTable();
        ~EtherWisPathCurrentTable();

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

        class EtherWisPathCurrentEntry; //type: ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry

        ydk::YList etherwispathcurrententry;
        
}; // ETHERWIS::EtherWisPathCurrentTable


class ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry : public ydk::Entity
{
    public:
        EtherWisPathCurrentEntry();
        ~EtherWisPathCurrentEntry();

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
        ydk::YLeaf etherwispathcurrentstatus; //type: EtherWisPathCurrentStatus
        ydk::YLeaf etherwispathcurrentj1transmitted; //type: binary
        ydk::YLeaf etherwispathcurrentj1received; //type: binary

}; // ETHERWIS::EtherWisPathCurrentTable::EtherWisPathCurrentEntry


class ETHERWIS::EtherWisFarEndPathCurrentTable : public ydk::Entity
{
    public:
        EtherWisFarEndPathCurrentTable();
        ~EtherWisFarEndPathCurrentTable();

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

        class EtherWisFarEndPathCurrentEntry; //type: ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry

        ydk::YList etherwisfarendpathcurrententry;
        
}; // ETHERWIS::EtherWisFarEndPathCurrentTable


class ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry : public ydk::Entity
{
    public:
        EtherWisFarEndPathCurrentEntry();
        ~EtherWisFarEndPathCurrentEntry();

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
        ydk::YLeaf etherwisfarendpathcurrentstatus; //type: EtherWisFarEndPathCurrentStatus

}; // ETHERWIS::EtherWisFarEndPathCurrentTable::EtherWisFarEndPathCurrentEntry

class ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceTxTestPatternMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf squareWave;
        static const ydk::Enum::YLeaf prbs31;
        static const ydk::Enum::YLeaf mixedFrequency;

};

class ETHERWIS::EtherWisDeviceTable::EtherWisDeviceEntry::EtherWisDeviceRxTestPatternMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf prbs31;
        static const ydk::Enum::YLeaf mixedFrequency;

};


}
}

#endif /* _ETHER_WIS_ */

