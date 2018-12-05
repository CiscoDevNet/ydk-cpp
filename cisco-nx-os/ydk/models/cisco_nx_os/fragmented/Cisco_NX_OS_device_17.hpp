#ifndef _CISCO_NX_OS_DEVICE_17_
#define _CISCO_NX_OS_DEVICE_17_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_15.hpp"
#include "Cisco_NX_OS_device_16.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::DhcpItems::InstItems::IpsgexvlanItems : public ydk::Entity
{
    public:
        IpsgexvlanItems();
        ~IpsgexvlanItems();

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

        class IpsgExVlanList; //type: System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList

        ydk::YList ipsgexvlan_list;
        
}; // System::DhcpItems::InstItems::IpsgexvlanItems


class System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList : public ydk::Entity
{
    public:
        IpsgExVlanList();
        ~IpsgExVlanList();

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

        ydk::YLeaf ipsgexvlannum; //type: uint16

}; // System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList


class System::DhcpItems::InstItems::SnoopvlanItems : public ydk::Entity
{
    public:
        SnoopvlanItems();
        ~SnoopvlanItems();

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

        class SnoopVlanList; //type: System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList

        ydk::YList snoopvlan_list;
        
}; // System::DhcpItems::InstItems::SnoopvlanItems


class System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList : public ydk::Entity
{
    public:
        SnoopVlanList();
        ~SnoopVlanList();

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

        ydk::YLeaf snoopvlannum; //type: uint16

}; // System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList


class System::DhcpItems::InstItems::SnoopifItems : public ydk::Entity
{
    public:
        SnoopifItems();
        ~SnoopifItems();

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

        class SnoopIfList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList

        ydk::YList snoopif_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList : public ydk::Entity
{
    public:
        SnoopIfList();
        ~SnoopIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf trustenabled; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class ComplexItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems
        class TextItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems
        class IpItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems
        class RtvrfMbrItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems> complex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems> text_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems : public ydk::Entity
{
    public:
        ComplexItems();
        ~ComplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class IpItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems
        class TextItems; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems> text_items;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems


class System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::DnsItems : public ydk::Entity
{
    public:
        DnsItems();
        ~DnsItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class ProfItems; //type: System::DnsItems::ProfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems> prof_items;
        
}; // System::DnsItems


class System::DnsItems::ProfItems : public ydk::Entity
{
    public:
        ProfItems();
        ~ProfItems();

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

        class ProfList; //type: System::DnsItems::ProfItems::ProfList

        ydk::YList prof_list;
        
}; // System::DnsItems::ProfItems


class System::DnsItems::ProfItems::ProfList : public ydk::Entity
{
    public:
        ProfList();
        ~ProfList();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class ProvItems; //type: System::DnsItems::ProfItems::ProfList::ProvItems
        class VrfItems; //type: System::DnsItems::ProfItems::ProfList::VrfItems
        class DomItems; //type: System::DnsItems::ProfItems::ProfList::DomItems
        class DomextItems; //type: System::DnsItems::ProfItems::ProfList::DomextItems
        class HostItems; //type: System::DnsItems::ProfItems::ProfList::HostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::ProvItems> prov_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::DomextItems> domext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::HostItems> host_items;
        
}; // System::DnsItems::ProfItems::ProfList


class System::DnsItems::ProfItems::ProfList::ProvItems : public ydk::Entity
{
    public:
        ProvItems();
        ~ProvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProviderList; //type: System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList

        ydk::YList provider_list;
        
}; // System::DnsItems::ProfItems::ProfList::ProvItems


class System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList : public ydk::Entity
{
    public:
        ProviderList();
        ~ProviderList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string

}; // System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList


class System::DnsItems::ProfItems::ProfList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfList; //type: System::DnsItems::ProfItems::ProfList::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::DnsItems::ProfItems::ProfList::VrfItems


class System::DnsItems::ProfItems::ProfList::VrfItems::VrfList : public ydk::Entity
{
    public:
        VrfList();
        ~VrfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class ProvItems; //type: System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems
        class DomItems; //type: System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems
        class DomextItems; //type: System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems> prov_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems> domext_items;
        
}; // System::DnsItems::ProfItems::ProfList::VrfItems::VrfList


class System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems : public ydk::Entity
{
    public:
        ProvItems();
        ~ProvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProviderList; //type: System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList

        ydk::YList provider_list;
        
}; // System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems


class System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList : public ydk::Entity
{
    public:
        ProviderList();
        ~ProviderList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string

}; // System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList


class System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems


class System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems : public ydk::Entity
{
    public:
        DomextItems();
        ~DomextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomExtList; //type: System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList

        ydk::YList domext_list;
        
}; // System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems


class System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList : public ydk::Entity
{
    public:
        DomExtList();
        ~DomExtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList


class System::DnsItems::ProfItems::ProfList::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::DnsItems::ProfItems::ProfList::DomItems


class System::DnsItems::ProfItems::ProfList::DomextItems : public ydk::Entity
{
    public:
        DomextItems();
        ~DomextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomExtList; //type: System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList

        ydk::YList domext_list;
        
}; // System::DnsItems::ProfItems::ProfList::DomextItems


class System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList : public ydk::Entity
{
    public:
        DomExtList();
        ~DomExtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList


class System::DnsItems::ProfItems::ProfList::HostItems : public ydk::Entity
{
    public:
        HostItems();
        ~HostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostList; //type: System::DnsItems::ProfItems::ProfList::HostItems::HostList

        ydk::YList host_list;
        
}; // System::DnsItems::ProfItems::ProfList::HostItems


class System::DnsItems::ProfItems::ProfList::HostItems::HostList : public ydk::Entity
{
    public:
        HostList();
        ~HostList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Ipv4hostItems; //type: System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems
        class Ipv6hostItems; //type: System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems> ipv4host_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems> ipv6host_items;
        
}; // System::DnsItems::ProfItems::ProfList::HostItems::HostList


class System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems : public ydk::Entity
{
    public:
        Ipv4hostItems();
        ~Ipv4hostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string

}; // System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems


class System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems : public ydk::Entity
{
    public:
        Ipv6hostItems();
        ~Ipv6hostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string

}; // System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems


class System::DecommissionItems : public ydk::Entity
{
    public:
        DecommissionItems();
        ~DecommissionItems();

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

        ydk::YLeaf nodedn; //type: string
        ydk::YLeaf wipe; //type: boolean
        ydk::YLeaf targetid; //type: uint32
        ydk::YLeaf tickcount; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::DecommissionItems


class System::InbItems : public ydk::Entity
{
    public:
        InbItems();
        ~InbItems();

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

        class InbandIfList; //type: System::InbItems::InbandIfList

        ydk::YList inbandif_list;
        
}; // System::InbItems


class System::InbItems::InbandIfList : public ydk::Entity
{
    public:
        InbandIfList();
        ~InbandIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class DepItems; //type: System::InbItems::InbandIfList::DepItems
        class VnodeItems; //type: System::InbItems::InbandIfList::VnodeItems
        class IdepItems; //type: System::InbItems::InbandIfList::IdepItems
        class OdevItems; //type: System::InbItems::InbandIfList::OdevItems
        class RsinbandConfItems; //type: System::InbItems::InbandIfList::RsinbandConfItems
        class RtvrfMbrItems; //type: System::InbItems::InbandIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::InbItems::InbandIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::DepItems> dep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::IdepItems> idep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems> odev_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::RsinbandConfItems> rsinbandconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::InbItems::InbandIfList


class System::InbItems::InbandIfList::DepItems : public ydk::Entity
{
    public:
        DepItems();
        ~DepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DEpList; //type: System::InbItems::InbandIfList::DepItems::DEpList

        ydk::YList dep_list;
        
}; // System::InbItems::InbandIfList::DepItems


class System::InbItems::InbandIfList::DepItems::DEpList : public ydk::Entity
{
    public:
        DEpList();
        ~DEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string

}; // System::InbItems::InbandIfList::DepItems::DEpList


class System::InbItems::InbandIfList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::InbItems::InbandIfList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::InbItems::InbandIfList::VnodeItems


class System::InbItems::InbandIfList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::InbItems::InbandIfList::VnodeItems::VNodeList


class System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems


class System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems


class System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::InbItems::InbandIfList::IdepItems : public ydk::Entity
{
    public:
        IdepItems();
        ~IdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpList; //type: System::InbItems::InbandIfList::IdepItems::IDEpList

        ydk::YList idep_list;
        
}; // System::InbItems::InbandIfList::IdepItems


class System::InbItems::InbandIfList::IdepItems::IDEpList : public ydk::Entity
{
    public:
        IDEpList();
        ~IDEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf eppdn; //type: string
        ydk::YLeaf compvmdn; //type: string
        ydk::YLeaf comphvdn; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf ephostaddr; //type: string
        ydk::YLeaf hypervisorname; //type: string
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf containername; //type: string
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf eppdownloadhint; //type: OpflexEppDownloadHint
        ydk::YLeaf handle; //type: uint64
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string
        class IdepcntrItems; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems
        class VdepItems; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems> idepcntr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems> vdep_items;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList


class System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems : public ydk::Entity
{
    public:
        IdepcntrItems();
        ~IdepcntrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpCntrList; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList

        ydk::YList idepcntr_list;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems


class System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList : public ydk::Entity
{
    public:
        IDEpCntrList();
        ~IDEpCntrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf direction; //type: OpflexDirection
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList


class System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems : public ydk::Entity
{
    public:
        VdepItems();
        ~VdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VDEpList; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList

        ydk::YList vdep_list;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems


class System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList : public ydk::Entity
{
    public:
        VDEpList();
        ~VDEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf brifid; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string
        class RsvNodeItems; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems> rsvnode_items;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList


class System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems : public ydk::Entity
{
    public:
        RsvNodeItems();
        ~RsvNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVNodeList; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList

        ydk::YList rsvnode_list;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems


class System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList : public ydk::Entity
{
    public:
        RsVNodeList();
        ~RsVNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList


class System::InbItems::InbandIfList::OdevItems : public ydk::Entity
{
    public:
        OdevItems();
        ~OdevItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ODevList; //type: System::InbItems::InbandIfList::OdevItems::ODevList

        ydk::YList odev_list;
        
}; // System::InbItems::InbandIfList::OdevItems


class System::InbItems::InbandIfList::OdevItems::ODevList : public ydk::Entity
{
    public:
        ODevList();
        ~ODevList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf numhb; //type: uint32
        ydk::YLeaf lastnumhb; //type: uint32
        ydk::YLeaf hbstatus; //type: OpflexHbStatus
        ydk::YLeaf operst; //type: OpflexDevOperState
        ydk::YLeaf maxmisshb; //type: uint32
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf state; //type: CompHostState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class OdevcapItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems
        class VnodeItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems
        class OpnicItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems> odevcap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems> opnic_items;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList


class System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems : public ydk::Entity
{
    public:
        OdevcapItems();
        ~OdevcapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems : public ydk::Entity
{
    public:
        OpnicItems();
        ~OpnicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OPNicList; //type: System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList

        ydk::YList opnic_list;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems


class System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList : public ydk::Entity
{
    public:
        OPNicList();
        ~OPNicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList


class System::InbItems::InbandIfList::RsinbandConfItems : public ydk::Entity
{
    public:
        RsinbandConfItems();
        ~RsinbandConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::InbItems::InbandIfList::RsinbandConfItems


class System::InbItems::InbandIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::InbItems::InbandIfList::RtvrfMbrItems


class System::InbItems::InbandIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::InbItems::InbandIfList::RtnwPathToIfItems


class System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::ExtItems : public ydk::Entity
{
    public:
        ExtItems();
        ~ExtItems();

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

        class ExtIfList; //type: System::ExtItems::ExtIfList

        ydk::YList extif_list;
        
}; // System::ExtItems


class System::ExtItems::ExtIfList : public ydk::Entity
{
    public:
        ExtIfList();
        ~ExtIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf extchasid; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class DepItems; //type: System::ExtItems::ExtIfList::DepItems
        class VnodeItems; //type: System::ExtItems::ExtIfList::VnodeItems
        class IdepItems; //type: System::ExtItems::ExtIfList::IdepItems
        class OdevItems; //type: System::ExtItems::ExtIfList::OdevItems
        class RsextConfItems; //type: System::ExtItems::ExtIfList::RsextConfItems
        class RtvrfMbrItems; //type: System::ExtItems::ExtIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::ExtItems::ExtIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::DepItems> dep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::IdepItems> idep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems> odev_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::RsextConfItems> rsextconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::ExtItems::ExtIfList


class System::ExtItems::ExtIfList::DepItems : public ydk::Entity
{
    public:
        DepItems();
        ~DepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DEpList; //type: System::ExtItems::ExtIfList::DepItems::DEpList

        ydk::YList dep_list;
        
}; // System::ExtItems::ExtIfList::DepItems


class System::ExtItems::ExtIfList::DepItems::DEpList : public ydk::Entity
{
    public:
        DEpList();
        ~DEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string

}; // System::ExtItems::ExtIfList::DepItems::DEpList


class System::ExtItems::ExtIfList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::ExtItems::ExtIfList::VnodeItems


class System::ExtItems::ExtIfList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList


class System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems


class System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems


class System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::ExtItems::ExtIfList::IdepItems : public ydk::Entity
{
    public:
        IdepItems();
        ~IdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpList; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList

        ydk::YList idep_list;
        
}; // System::ExtItems::ExtIfList::IdepItems


class System::ExtItems::ExtIfList::IdepItems::IDEpList : public ydk::Entity
{
    public:
        IDEpList();
        ~IDEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf eppdn; //type: string
        ydk::YLeaf compvmdn; //type: string
        ydk::YLeaf comphvdn; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf ephostaddr; //type: string
        ydk::YLeaf hypervisorname; //type: string
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf containername; //type: string
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf eppdownloadhint; //type: OpflexEppDownloadHint
        ydk::YLeaf handle; //type: uint64
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string
        class IdepcntrItems; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems
        class VdepItems; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems> idepcntr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems> vdep_items;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList


class System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems : public ydk::Entity
{
    public:
        IdepcntrItems();
        ~IdepcntrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpCntrList; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList

        ydk::YList idepcntr_list;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems


class System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList : public ydk::Entity
{
    public:
        IDEpCntrList();
        ~IDEpCntrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf direction; //type: OpflexDirection
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList


class System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems : public ydk::Entity
{
    public:
        VdepItems();
        ~VdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VDEpList; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList

        ydk::YList vdep_list;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems


class System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList : public ydk::Entity
{
    public:
        VDEpList();
        ~VDEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf brifid; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string
        class RsvNodeItems; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems> rsvnode_items;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList


class System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems : public ydk::Entity
{
    public:
        RsvNodeItems();
        ~RsvNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVNodeList; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList

        ydk::YList rsvnode_list;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems


class System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList : public ydk::Entity
{
    public:
        RsVNodeList();
        ~RsVNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList


class System::ExtItems::ExtIfList::OdevItems : public ydk::Entity
{
    public:
        OdevItems();
        ~OdevItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ODevList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList

        ydk::YList odev_list;
        
}; // System::ExtItems::ExtIfList::OdevItems


class System::ExtItems::ExtIfList::OdevItems::ODevList : public ydk::Entity
{
    public:
        ODevList();
        ~ODevList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf numhb; //type: uint32
        ydk::YLeaf lastnumhb; //type: uint32
        ydk::YLeaf hbstatus; //type: OpflexHbStatus
        ydk::YLeaf operst; //type: OpflexDevOperState
        ydk::YLeaf maxmisshb; //type: uint32
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf state; //type: CompHostState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class OdevcapItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems
        class VnodeItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems
        class OpnicItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems> odevcap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems> opnic_items;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList


class System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems : public ydk::Entity
{
    public:
        OdevcapItems();
        ~OdevcapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems : public ydk::Entity
{
    public:
        OpnicItems();
        ~OpnicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OPNicList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList

        ydk::YList opnic_list;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList : public ydk::Entity
{
    public:
        OPNicList();
        ~OPNicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList


class System::ExtItems::ExtIfList::RsextConfItems : public ydk::Entity
{
    public:
        RsextConfItems();
        ~RsextConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::ExtItems::ExtIfList::RsextConfItems


class System::ExtItems::ExtIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::ExtItems::ExtIfList::RtvrfMbrItems


class System::ExtItems::ExtIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::ExtItems::ExtIfList::RtnwPathToIfItems


class System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList


}
}

#endif /* _CISCO_NX_OS_DEVICE_17_ */

