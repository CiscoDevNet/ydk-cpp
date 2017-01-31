
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_crypto_macsec_pl_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_macsec_pl_oper {

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats::TxSaStats()
    :
    	out_octets_encrypted{YType::uint64, "out-octets-encrypted"},
	 out_octets_protected{YType::uint64, "out-octets-protected"},
	 out_pkts_encrypted{YType::uint64, "out-pkts-encrypted"},
	 out_pkts_protected{YType::uint64, "out-pkts-protected"}
{
    yang_name = "tx-sa-stats"; yang_parent_name = "msfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats::~TxSaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats::has_data() const
{
    return out_octets_encrypted.is_set
	|| out_octets_protected.is_set
	|| out_pkts_encrypted.is_set
	|| out_pkts_protected.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(out_octets_encrypted.operation)
	|| is_set(out_octets_protected.operation)
	|| is_set(out_pkts_encrypted.operation)
	|| is_set(out_pkts_protected.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_octets_encrypted.is_set || is_set(out_octets_encrypted.operation)) leaf_name_data.push_back(out_octets_encrypted.get_name_leafdata());
    if (out_octets_protected.is_set || is_set(out_octets_protected.operation)) leaf_name_data.push_back(out_octets_protected.get_name_leafdata());
    if (out_pkts_encrypted.is_set || is_set(out_pkts_encrypted.operation)) leaf_name_data.push_back(out_pkts_encrypted.get_name_leafdata());
    if (out_pkts_protected.is_set || is_set(out_pkts_protected.operation)) leaf_name_data.push_back(out_pkts_protected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted = value;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected = value;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted = value;
    }
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats::RxSaStats()
    :
    	in_octets_decrypted{YType::uint64, "in-octets-decrypted"},
	 in_octets_validated{YType::uint64, "in-octets-validated"},
	 in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
	 in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
	 in_pkts_late{YType::uint64, "in-pkts-late"},
	 in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
	 in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
	 in_pkts_ok{YType::uint64, "in-pkts-ok"},
	 in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
	 in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"}
{
    yang_name = "rx-sa-stats"; yang_parent_name = "msfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats::~RxSaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats::has_data() const
{
    return in_octets_decrypted.is_set
	|| in_octets_validated.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_late.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_unchecked.is_set
	|| in_pkts_unused_sa.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_octets_decrypted.operation)
	|| is_set(in_octets_validated.operation)
	|| is_set(in_pkts_delayed.operation)
	|| is_set(in_pkts_invalid.operation)
	|| is_set(in_pkts_late.operation)
	|| is_set(in_pkts_not_using_sa.operation)
	|| is_set(in_pkts_not_valid.operation)
	|| is_set(in_pkts_ok.operation)
	|| is_set(in_pkts_unchecked.operation)
	|| is_set(in_pkts_unused_sa.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_octets_decrypted.is_set || is_set(in_octets_decrypted.operation)) leaf_name_data.push_back(in_octets_decrypted.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.operation)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.operation)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.operation)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.operation)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.operation)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.operation)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.operation)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.operation)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.operation)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted = value;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats::TxInterfaceMacsecStats()
    :
    	out_pkt_too_long{YType::uint64, "out-pkt-too-long"},
	 out_pkt_uncontrolled{YType::uint64, "out-pkt-uncontrolled"},
	 out_pkt_untagged{YType::uint64, "out-pkt-untagged"}
{
    yang_name = "tx-interface-macsec-stats"; yang_parent_name = "msfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats::~TxInterfaceMacsecStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats::has_data() const
{
    return out_pkt_too_long.is_set
	|| out_pkt_uncontrolled.is_set
	|| out_pkt_untagged.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats::has_operation() const
{
    return is_set(operation)
	|| is_set(out_pkt_too_long.operation)
	|| is_set(out_pkt_uncontrolled.operation)
	|| is_set(out_pkt_untagged.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-interface-macsec-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkt_too_long.is_set || is_set(out_pkt_too_long.operation)) leaf_name_data.push_back(out_pkt_too_long.get_name_leafdata());
    if (out_pkt_uncontrolled.is_set || is_set(out_pkt_uncontrolled.operation)) leaf_name_data.push_back(out_pkt_uncontrolled.get_name_leafdata());
    if (out_pkt_untagged.is_set || is_set(out_pkt_untagged.operation)) leaf_name_data.push_back(out_pkt_untagged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-pkt-too-long")
    {
        out_pkt_too_long = value;
    }
    if(value_path == "out-pkt-uncontrolled")
    {
        out_pkt_uncontrolled = value;
    }
    if(value_path == "out-pkt-untagged")
    {
        out_pkt_untagged = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats::RxInterfaceMacsecStats()
    :
    	in_pkt_bad_tag{YType::uint64, "in-pkt-bad-tag"},
	 in_pkt_no_sci{YType::uint64, "in-pkt-no-sci"},
	 in_pkt_notag{YType::uint64, "in-pkt-notag"},
	 in_pkt_overrun{YType::uint64, "in-pkt-overrun"},
	 in_pkt_tagged{YType::uint64, "in-pkt-tagged"},
	 in_pkt_uncontrolled{YType::uint64, "in-pkt-uncontrolled"},
	 in_pkt_unknown_sci{YType::uint64, "in-pkt-unknown-sci"},
	 in_pkt_untagged{YType::uint64, "in-pkt-untagged"}
{
    yang_name = "rx-interface-macsec-stats"; yang_parent_name = "msfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats::~RxInterfaceMacsecStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats::has_data() const
{
    return in_pkt_bad_tag.is_set
	|| in_pkt_no_sci.is_set
	|| in_pkt_notag.is_set
	|| in_pkt_overrun.is_set
	|| in_pkt_tagged.is_set
	|| in_pkt_uncontrolled.is_set
	|| in_pkt_unknown_sci.is_set
	|| in_pkt_untagged.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_pkt_bad_tag.operation)
	|| is_set(in_pkt_no_sci.operation)
	|| is_set(in_pkt_notag.operation)
	|| is_set(in_pkt_overrun.operation)
	|| is_set(in_pkt_tagged.operation)
	|| is_set(in_pkt_uncontrolled.operation)
	|| is_set(in_pkt_unknown_sci.operation)
	|| is_set(in_pkt_untagged.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-interface-macsec-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_bad_tag.is_set || is_set(in_pkt_bad_tag.operation)) leaf_name_data.push_back(in_pkt_bad_tag.get_name_leafdata());
    if (in_pkt_no_sci.is_set || is_set(in_pkt_no_sci.operation)) leaf_name_data.push_back(in_pkt_no_sci.get_name_leafdata());
    if (in_pkt_notag.is_set || is_set(in_pkt_notag.operation)) leaf_name_data.push_back(in_pkt_notag.get_name_leafdata());
    if (in_pkt_overrun.is_set || is_set(in_pkt_overrun.operation)) leaf_name_data.push_back(in_pkt_overrun.get_name_leafdata());
    if (in_pkt_tagged.is_set || is_set(in_pkt_tagged.operation)) leaf_name_data.push_back(in_pkt_tagged.get_name_leafdata());
    if (in_pkt_uncontrolled.is_set || is_set(in_pkt_uncontrolled.operation)) leaf_name_data.push_back(in_pkt_uncontrolled.get_name_leafdata());
    if (in_pkt_unknown_sci.is_set || is_set(in_pkt_unknown_sci.operation)) leaf_name_data.push_back(in_pkt_unknown_sci.get_name_leafdata());
    if (in_pkt_untagged.is_set || is_set(in_pkt_untagged.operation)) leaf_name_data.push_back(in_pkt_untagged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag = value;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci = value;
    }
    if(value_path == "in-pkt-notag")
    {
        in_pkt_notag = value;
    }
    if(value_path == "in-pkt-overrun")
    {
        in_pkt_overrun = value;
    }
    if(value_path == "in-pkt-tagged")
    {
        in_pkt_tagged = value;
    }
    if(value_path == "in-pkt-uncontrolled")
    {
        in_pkt_uncontrolled = value;
    }
    if(value_path == "in-pkt-unknown-sci")
    {
        in_pkt_unknown_sci = value;
    }
    if(value_path == "in-pkt-untagged")
    {
        in_pkt_untagged = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::MsfpgaStats()
    :
    rx_interface_macsec_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats>())
	,rx_sa_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats>())
	,tx_interface_macsec_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats>())
	,tx_sa_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats>())
{
    rx_interface_macsec_stats->parent = this;
    children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();

    rx_sa_stats->parent = this;
    children["rx-sa-stats"] = rx_sa_stats.get();

    tx_interface_macsec_stats->parent = this;
    children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();

    tx_sa_stats->parent = this;
    children["tx-sa-stats"] = tx_sa_stats.get();

    yang_name = "msfpga-stats"; yang_parent_name = "hw-statistics";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::~MsfpgaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::has_data() const
{
    return (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_data())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_data())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_data())
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::has_operation() const
{
    return is_set(operation)
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_operation())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_operation())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_operation())
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-interface-macsec-stats")
    {
        if(rx_interface_macsec_stats != nullptr)
        {
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
        else
        {
            rx_interface_macsec_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats>();
            rx_interface_macsec_stats->parent = this;
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
        return children.at("rx-interface-macsec-stats");
    }

    if(child_yang_name == "rx-sa-stats")
    {
        if(rx_sa_stats != nullptr)
        {
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
        else
        {
            rx_sa_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats>();
            rx_sa_stats->parent = this;
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
        return children.at("rx-sa-stats");
    }

    if(child_yang_name == "tx-interface-macsec-stats")
    {
        if(tx_interface_macsec_stats != nullptr)
        {
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
        else
        {
            tx_interface_macsec_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats>();
            tx_interface_macsec_stats->parent = this;
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
        return children.at("tx-interface-macsec-stats");
    }

    if(child_yang_name == "tx-sa-stats")
    {
        if(tx_sa_stats != nullptr)
        {
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
        else
        {
            tx_sa_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats>();
            tx_sa_stats->parent = this;
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
        return children.at("tx-sa-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::get_children()
{
    if(children.find("rx-interface-macsec-stats") == children.end())
    {
        if(rx_interface_macsec_stats != nullptr)
        {
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
    }

    if(children.find("rx-sa-stats") == children.end())
    {
        if(rx_sa_stats != nullptr)
        {
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
    }

    if(children.find("tx-interface-macsec-stats") == children.end())
    {
        if(tx_interface_macsec_stats != nullptr)
        {
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
    }

    if(children.find("tx-sa-stats") == children.end())
    {
        if(tx_sa_stats != nullptr)
        {
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats::MacsecTxStats()
    :
    	current_an{YType::uint64, "current-an"},
	 sa_encrypted_pkts{YType::uint64, "sa-encrypted-pkts"},
	 sc_encrypted_octets{YType::uint64, "sc-encrypted-octets"},
	 sc_encrypted_pkts{YType::uint64, "sc-encrypted-pkts"},
	 sc_overrun_pkts{YType::uint64, "sc-overrun-pkts"},
	 sc_toolong_pkts{YType::uint64, "sc-toolong-pkts"},
	 sc_untagged_pkts{YType::uint64, "sc-untagged-pkts"}
{
    yang_name = "macsec-tx-stats"; yang_parent_name = "xlfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats::~MacsecTxStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats::has_data() const
{
    return current_an.is_set
	|| sa_encrypted_pkts.is_set
	|| sc_encrypted_octets.is_set
	|| sc_encrypted_pkts.is_set
	|| sc_overrun_pkts.is_set
	|| sc_toolong_pkts.is_set
	|| sc_untagged_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats::has_operation() const
{
    return is_set(operation)
	|| is_set(current_an.operation)
	|| is_set(sa_encrypted_pkts.operation)
	|| is_set(sc_encrypted_octets.operation)
	|| is_set(sc_encrypted_pkts.operation)
	|| is_set(sc_overrun_pkts.operation)
	|| is_set(sc_toolong_pkts.operation)
	|| is_set(sc_untagged_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-tx-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_an.is_set || is_set(current_an.operation)) leaf_name_data.push_back(current_an.get_name_leafdata());
    if (sa_encrypted_pkts.is_set || is_set(sa_encrypted_pkts.operation)) leaf_name_data.push_back(sa_encrypted_pkts.get_name_leafdata());
    if (sc_encrypted_octets.is_set || is_set(sc_encrypted_octets.operation)) leaf_name_data.push_back(sc_encrypted_octets.get_name_leafdata());
    if (sc_encrypted_pkts.is_set || is_set(sc_encrypted_pkts.operation)) leaf_name_data.push_back(sc_encrypted_pkts.get_name_leafdata());
    if (sc_overrun_pkts.is_set || is_set(sc_overrun_pkts.operation)) leaf_name_data.push_back(sc_overrun_pkts.get_name_leafdata());
    if (sc_toolong_pkts.is_set || is_set(sc_toolong_pkts.operation)) leaf_name_data.push_back(sc_toolong_pkts.get_name_leafdata());
    if (sc_untagged_pkts.is_set || is_set(sc_untagged_pkts.operation)) leaf_name_data.push_back(sc_untagged_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-an")
    {
        current_an = value;
    }
    if(value_path == "sa-encrypted-pkts")
    {
        sa_encrypted_pkts = value;
    }
    if(value_path == "sc-encrypted-octets")
    {
        sc_encrypted_octets = value;
    }
    if(value_path == "sc-encrypted-pkts")
    {
        sc_encrypted_pkts = value;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts = value;
    }
    if(value_path == "sc-toolong-pkts")
    {
        sc_toolong_pkts = value;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::RxSaStat()
    :
    	an{YType::uint64, "an"},
	 sa_invalid_pkts{YType::uint64, "sa-invalid-pkts"},
	 sa_not_using_pkts{YType::uint64, "sa-not-using-pkts"},
	 sa_not_valid_pkts{YType::uint64, "sa-not-valid-pkts"},
	 sa_ok_pkts{YType::uint64, "sa-ok-pkts"},
	 sa_unused_pkts{YType::uint64, "sa-unused-pkts"}
{
    yang_name = "rx-sa-stat"; yang_parent_name = "macsec-rx-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::~RxSaStat()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::has_data() const
{
    return an.is_set
	|| sa_invalid_pkts.is_set
	|| sa_not_using_pkts.is_set
	|| sa_not_valid_pkts.is_set
	|| sa_ok_pkts.is_set
	|| sa_unused_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::has_operation() const
{
    return is_set(operation)
	|| is_set(an.operation)
	|| is_set(sa_invalid_pkts.operation)
	|| is_set(sa_not_using_pkts.operation)
	|| is_set(sa_not_valid_pkts.operation)
	|| is_set(sa_ok_pkts.operation)
	|| is_set(sa_unused_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stat";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (sa_invalid_pkts.is_set || is_set(sa_invalid_pkts.operation)) leaf_name_data.push_back(sa_invalid_pkts.get_name_leafdata());
    if (sa_not_using_pkts.is_set || is_set(sa_not_using_pkts.operation)) leaf_name_data.push_back(sa_not_using_pkts.get_name_leafdata());
    if (sa_not_valid_pkts.is_set || is_set(sa_not_valid_pkts.operation)) leaf_name_data.push_back(sa_not_valid_pkts.get_name_leafdata());
    if (sa_ok_pkts.is_set || is_set(sa_ok_pkts.operation)) leaf_name_data.push_back(sa_ok_pkts.get_name_leafdata());
    if (sa_unused_pkts.is_set || is_set(sa_unused_pkts.operation)) leaf_name_data.push_back(sa_unused_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "sa-invalid-pkts")
    {
        sa_invalid_pkts = value;
    }
    if(value_path == "sa-not-using-pkts")
    {
        sa_not_using_pkts = value;
    }
    if(value_path == "sa-not-valid-pkts")
    {
        sa_not_valid_pkts = value;
    }
    if(value_path == "sa-ok-pkts")
    {
        sa_ok_pkts = value;
    }
    if(value_path == "sa-unused-pkts")
    {
        sa_unused_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::MacsecRxStats()
    :
    	sc_bad_tag_pkts{YType::uint64, "sc-bad-tag-pkts"},
	 sc_decrypted_octets{YType::uint64, "sc-decrypted-octets"},
	 sc_delayed_pkts{YType::uint64, "sc-delayed-pkts"},
	 sc_invalid_pkts{YType::uint64, "sc-invalid-pkts"},
	 sc_late_pkts{YType::uint64, "sc-late-pkts"},
	 sc_no_sci_pkts{YType::uint64, "sc-no-sci-pkts"},
	 sc_no_tag_pkts{YType::uint64, "sc-no-tag-pkts"},
	 sc_not_using_pkts{YType::uint64, "sc-not-using-pkts"},
	 sc_not_valid_pkts{YType::uint64, "sc-not-valid-pkts"},
	 sc_ok_pkts{YType::uint64, "sc-ok-pkts"},
	 sc_overrun_pkts{YType::uint64, "sc-overrun-pkts"},
	 sc_unchecked_pkts{YType::uint64, "sc-unchecked-pkts"},
	 sc_unknown_sci_pkts{YType::uint64, "sc-unknown-sci-pkts"},
	 sc_untagged_pkts{YType::uint64, "sc-untagged-pkts"},
	 sc_unused_pkts{YType::uint64, "sc-unused-pkts"}
{
    yang_name = "macsec-rx-stats"; yang_parent_name = "xlfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::~MacsecRxStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::has_data() const
{
    for (std::size_t index=0; index<rx_sa_stat.size(); index++)
    {
        if(rx_sa_stat[index]->has_data())
            return true;
    }
    return sc_bad_tag_pkts.is_set
	|| sc_decrypted_octets.is_set
	|| sc_delayed_pkts.is_set
	|| sc_invalid_pkts.is_set
	|| sc_late_pkts.is_set
	|| sc_no_sci_pkts.is_set
	|| sc_no_tag_pkts.is_set
	|| sc_not_using_pkts.is_set
	|| sc_not_valid_pkts.is_set
	|| sc_ok_pkts.is_set
	|| sc_overrun_pkts.is_set
	|| sc_unchecked_pkts.is_set
	|| sc_unknown_sci_pkts.is_set
	|| sc_untagged_pkts.is_set
	|| sc_unused_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::has_operation() const
{
    for (std::size_t index=0; index<rx_sa_stat.size(); index++)
    {
        if(rx_sa_stat[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(sc_bad_tag_pkts.operation)
	|| is_set(sc_decrypted_octets.operation)
	|| is_set(sc_delayed_pkts.operation)
	|| is_set(sc_invalid_pkts.operation)
	|| is_set(sc_late_pkts.operation)
	|| is_set(sc_no_sci_pkts.operation)
	|| is_set(sc_no_tag_pkts.operation)
	|| is_set(sc_not_using_pkts.operation)
	|| is_set(sc_not_valid_pkts.operation)
	|| is_set(sc_ok_pkts.operation)
	|| is_set(sc_overrun_pkts.operation)
	|| is_set(sc_unchecked_pkts.operation)
	|| is_set(sc_unknown_sci_pkts.operation)
	|| is_set(sc_untagged_pkts.operation)
	|| is_set(sc_unused_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-rx-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sc_bad_tag_pkts.is_set || is_set(sc_bad_tag_pkts.operation)) leaf_name_data.push_back(sc_bad_tag_pkts.get_name_leafdata());
    if (sc_decrypted_octets.is_set || is_set(sc_decrypted_octets.operation)) leaf_name_data.push_back(sc_decrypted_octets.get_name_leafdata());
    if (sc_delayed_pkts.is_set || is_set(sc_delayed_pkts.operation)) leaf_name_data.push_back(sc_delayed_pkts.get_name_leafdata());
    if (sc_invalid_pkts.is_set || is_set(sc_invalid_pkts.operation)) leaf_name_data.push_back(sc_invalid_pkts.get_name_leafdata());
    if (sc_late_pkts.is_set || is_set(sc_late_pkts.operation)) leaf_name_data.push_back(sc_late_pkts.get_name_leafdata());
    if (sc_no_sci_pkts.is_set || is_set(sc_no_sci_pkts.operation)) leaf_name_data.push_back(sc_no_sci_pkts.get_name_leafdata());
    if (sc_no_tag_pkts.is_set || is_set(sc_no_tag_pkts.operation)) leaf_name_data.push_back(sc_no_tag_pkts.get_name_leafdata());
    if (sc_not_using_pkts.is_set || is_set(sc_not_using_pkts.operation)) leaf_name_data.push_back(sc_not_using_pkts.get_name_leafdata());
    if (sc_not_valid_pkts.is_set || is_set(sc_not_valid_pkts.operation)) leaf_name_data.push_back(sc_not_valid_pkts.get_name_leafdata());
    if (sc_ok_pkts.is_set || is_set(sc_ok_pkts.operation)) leaf_name_data.push_back(sc_ok_pkts.get_name_leafdata());
    if (sc_overrun_pkts.is_set || is_set(sc_overrun_pkts.operation)) leaf_name_data.push_back(sc_overrun_pkts.get_name_leafdata());
    if (sc_unchecked_pkts.is_set || is_set(sc_unchecked_pkts.operation)) leaf_name_data.push_back(sc_unchecked_pkts.get_name_leafdata());
    if (sc_unknown_sci_pkts.is_set || is_set(sc_unknown_sci_pkts.operation)) leaf_name_data.push_back(sc_unknown_sci_pkts.get_name_leafdata());
    if (sc_untagged_pkts.is_set || is_set(sc_untagged_pkts.operation)) leaf_name_data.push_back(sc_untagged_pkts.get_name_leafdata());
    if (sc_unused_pkts.is_set || is_set(sc_unused_pkts.operation)) leaf_name_data.push_back(sc_unused_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-sa-stat")
    {
        for(auto const & c : rx_sa_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat>();
        c->parent = this;
        rx_sa_stat.push_back(std::move(c));
        children[segment_path] = rx_sa_stat.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::get_children()
{
    for (auto const & c : rx_sa_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sc-bad-tag-pkts")
    {
        sc_bad_tag_pkts = value;
    }
    if(value_path == "sc-decrypted-octets")
    {
        sc_decrypted_octets = value;
    }
    if(value_path == "sc-delayed-pkts")
    {
        sc_delayed_pkts = value;
    }
    if(value_path == "sc-invalid-pkts")
    {
        sc_invalid_pkts = value;
    }
    if(value_path == "sc-late-pkts")
    {
        sc_late_pkts = value;
    }
    if(value_path == "sc-no-sci-pkts")
    {
        sc_no_sci_pkts = value;
    }
    if(value_path == "sc-no-tag-pkts")
    {
        sc_no_tag_pkts = value;
    }
    if(value_path == "sc-not-using-pkts")
    {
        sc_not_using_pkts = value;
    }
    if(value_path == "sc-not-valid-pkts")
    {
        sc_not_valid_pkts = value;
    }
    if(value_path == "sc-ok-pkts")
    {
        sc_ok_pkts = value;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts = value;
    }
    if(value_path == "sc-unchecked-pkts")
    {
        sc_unchecked_pkts = value;
    }
    if(value_path == "sc-unknown-sci-pkts")
    {
        sc_unknown_sci_pkts = value;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts = value;
    }
    if(value_path == "sc-unused-pkts")
    {
        sc_unused_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::XlfpgaStats()
    :
    macsec_rx_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats>())
	,macsec_tx_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats>())
{
    macsec_rx_stats->parent = this;
    children["macsec-rx-stats"] = macsec_rx_stats.get();

    macsec_tx_stats->parent = this;
    children["macsec-tx-stats"] = macsec_tx_stats.get();

    yang_name = "xlfpga-stats"; yang_parent_name = "hw-statistics";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::~XlfpgaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::has_data() const
{
    return (macsec_rx_stats !=  nullptr && macsec_rx_stats->has_data())
	|| (macsec_tx_stats !=  nullptr && macsec_tx_stats->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::has_operation() const
{
    return is_set(operation)
	|| (macsec_rx_stats !=  nullptr && macsec_rx_stats->has_operation())
	|| (macsec_tx_stats !=  nullptr && macsec_tx_stats->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xlfpga-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "macsec-rx-stats")
    {
        if(macsec_rx_stats != nullptr)
        {
            children["macsec-rx-stats"] = macsec_rx_stats.get();
        }
        else
        {
            macsec_rx_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats>();
            macsec_rx_stats->parent = this;
            children["macsec-rx-stats"] = macsec_rx_stats.get();
        }
        return children.at("macsec-rx-stats");
    }

    if(child_yang_name == "macsec-tx-stats")
    {
        if(macsec_tx_stats != nullptr)
        {
            children["macsec-tx-stats"] = macsec_tx_stats.get();
        }
        else
        {
            macsec_tx_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats>();
            macsec_tx_stats->parent = this;
            children["macsec-tx-stats"] = macsec_tx_stats.get();
        }
        return children.at("macsec-tx-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::get_children()
{
    if(children.find("macsec-rx-stats") == children.end())
    {
        if(macsec_rx_stats != nullptr)
        {
            children["macsec-rx-stats"] = macsec_rx_stats.get();
        }
    }

    if(children.find("macsec-tx-stats") == children.end())
    {
        if(macsec_tx_stats != nullptr)
        {
            children["macsec-tx-stats"] = macsec_tx_stats.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats::TxSaStats()
    :
    	out_octets_encrypted_protected1{YType::uint64, "out-octets-encrypted-protected1"},
	 out_octets_encrypted_protected2{YType::uint64, "out-octets-encrypted-protected2"},
	 out_pkts_encrypted_protected{YType::uint64, "out-pkts-encrypted-protected"},
	 out_pkts_sa_not_in_use{YType::uint64, "out-pkts-sa-not-in-use"},
	 out_pkts_too_long{YType::uint64, "out-pkts-too-long"}
{
    yang_name = "tx-sa-stats"; yang_parent_name = "es200-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats::~TxSaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats::has_data() const
{
    return out_octets_encrypted_protected1.is_set
	|| out_octets_encrypted_protected2.is_set
	|| out_pkts_encrypted_protected.is_set
	|| out_pkts_sa_not_in_use.is_set
	|| out_pkts_too_long.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(out_octets_encrypted_protected1.operation)
	|| is_set(out_octets_encrypted_protected2.operation)
	|| is_set(out_pkts_encrypted_protected.operation)
	|| is_set(out_pkts_sa_not_in_use.operation)
	|| is_set(out_pkts_too_long.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_octets_encrypted_protected1.is_set || is_set(out_octets_encrypted_protected1.operation)) leaf_name_data.push_back(out_octets_encrypted_protected1.get_name_leafdata());
    if (out_octets_encrypted_protected2.is_set || is_set(out_octets_encrypted_protected2.operation)) leaf_name_data.push_back(out_octets_encrypted_protected2.get_name_leafdata());
    if (out_pkts_encrypted_protected.is_set || is_set(out_pkts_encrypted_protected.operation)) leaf_name_data.push_back(out_pkts_encrypted_protected.get_name_leafdata());
    if (out_pkts_sa_not_in_use.is_set || is_set(out_pkts_sa_not_in_use.operation)) leaf_name_data.push_back(out_pkts_sa_not_in_use.get_name_leafdata());
    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.operation)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1 = value;
    }
    if(value_path == "out-octets-encrypted-protected2")
    {
        out_octets_encrypted_protected2 = value;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected = value;
    }
    if(value_path == "out-pkts-sa-not-in-use")
    {
        out_pkts_sa_not_in_use = value;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats::RxSaStats()
    :
    	in_octets_decrypted_validated1{YType::uint64, "in-octets-decrypted-validated1"},
	 in_octets_decrypted_validated2{YType::uint64, "in-octets-decrypted-validated2"},
	 in_octets_validated{YType::uint64, "in-octets-validated"},
	 in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
	 in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
	 in_pkts_late{YType::uint64, "in-pkts-late"},
	 in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
	 in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
	 in_pkts_ok{YType::uint64, "in-pkts-ok"},
	 in_pkts_sa_not_in_use{YType::uint64, "in-pkts-sa-not-in-use"},
	 in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
	 in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"}
{
    yang_name = "rx-sa-stats"; yang_parent_name = "es200-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats::~RxSaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats::has_data() const
{
    return in_octets_decrypted_validated1.is_set
	|| in_octets_decrypted_validated2.is_set
	|| in_octets_validated.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_late.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_sa_not_in_use.is_set
	|| in_pkts_unchecked.is_set
	|| in_pkts_unused_sa.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_octets_decrypted_validated1.operation)
	|| is_set(in_octets_decrypted_validated2.operation)
	|| is_set(in_octets_validated.operation)
	|| is_set(in_pkts_delayed.operation)
	|| is_set(in_pkts_invalid.operation)
	|| is_set(in_pkts_late.operation)
	|| is_set(in_pkts_not_using_sa.operation)
	|| is_set(in_pkts_not_valid.operation)
	|| is_set(in_pkts_ok.operation)
	|| is_set(in_pkts_sa_not_in_use.operation)
	|| is_set(in_pkts_unchecked.operation)
	|| is_set(in_pkts_unused_sa.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_octets_decrypted_validated1.is_set || is_set(in_octets_decrypted_validated1.operation)) leaf_name_data.push_back(in_octets_decrypted_validated1.get_name_leafdata());
    if (in_octets_decrypted_validated2.is_set || is_set(in_octets_decrypted_validated2.operation)) leaf_name_data.push_back(in_octets_decrypted_validated2.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.operation)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.operation)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.operation)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.operation)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.operation)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.operation)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.operation)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_sa_not_in_use.is_set || is_set(in_pkts_sa_not_in_use.operation)) leaf_name_data.push_back(in_pkts_sa_not_in_use.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.operation)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.operation)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1 = value;
    }
    if(value_path == "in-octets-decrypted-validated2")
    {
        in_octets_decrypted_validated2 = value;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
    }
    if(value_path == "in-pkts-sa-not-in-use")
    {
        in_pkts_sa_not_in_use = value;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats::TxInterfaceMacsecStats()
    :
    	out_bcast_pkts_ctrl{YType::uint64, "out-bcast-pkts-ctrl"},
	 out_bcast_pkts_unctrl{YType::uint64, "out-bcast-pkts-unctrl"},
	 out_drop_pkts_class{YType::uint64, "out-drop-pkts-class"},
	 out_drop_pkts_data{YType::uint64, "out-drop-pkts-data"},
	 out_mcast_pkts_ctrl{YType::uint64, "out-mcast-pkts-ctrl"},
	 out_mcast_pkts_unctrl{YType::uint64, "out-mcast-pkts-unctrl"},
	 out_octets_common{YType::uint64, "out-octets-common"},
	 out_octets_ctrl{YType::uint64, "out-octets-ctrl"},
	 out_octets_unctrl{YType::uint64, "out-octets-unctrl"},
	 out_pkt_ctrl{YType::uint64, "out-pkt-ctrl"},
	 out_pkts_untagged{YType::uint64, "out-pkts-untagged"},
	 out_rx_drop_pkts_ctrl{YType::uint64, "out-rx-drop-pkts-ctrl"},
	 out_rx_drop_pkts_unctrl{YType::uint64, "out-rx-drop-pkts-unctrl"},
	 out_rx_err_pkts_ctrl{YType::uint64, "out-rx-err-pkts-ctrl"},
	 out_rx_err_pkts_unctrl{YType::uint64, "out-rx-err-pkts-unctrl"},
	 out_ucast_pkts_ctrl{YType::uint64, "out-ucast-pkts-ctrl"},
	 out_ucast_pkts_unctrl{YType::uint64, "out-ucast-pkts-unctrl"},
	 transform_error_pkts{YType::uint64, "transform-error-pkts"}
{
    yang_name = "tx-interface-macsec-stats"; yang_parent_name = "es200-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats::~TxInterfaceMacsecStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats::has_data() const
{
    return out_bcast_pkts_ctrl.is_set
	|| out_bcast_pkts_unctrl.is_set
	|| out_drop_pkts_class.is_set
	|| out_drop_pkts_data.is_set
	|| out_mcast_pkts_ctrl.is_set
	|| out_mcast_pkts_unctrl.is_set
	|| out_octets_common.is_set
	|| out_octets_ctrl.is_set
	|| out_octets_unctrl.is_set
	|| out_pkt_ctrl.is_set
	|| out_pkts_untagged.is_set
	|| out_rx_drop_pkts_ctrl.is_set
	|| out_rx_drop_pkts_unctrl.is_set
	|| out_rx_err_pkts_ctrl.is_set
	|| out_rx_err_pkts_unctrl.is_set
	|| out_ucast_pkts_ctrl.is_set
	|| out_ucast_pkts_unctrl.is_set
	|| transform_error_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats::has_operation() const
{
    return is_set(operation)
	|| is_set(out_bcast_pkts_ctrl.operation)
	|| is_set(out_bcast_pkts_unctrl.operation)
	|| is_set(out_drop_pkts_class.operation)
	|| is_set(out_drop_pkts_data.operation)
	|| is_set(out_mcast_pkts_ctrl.operation)
	|| is_set(out_mcast_pkts_unctrl.operation)
	|| is_set(out_octets_common.operation)
	|| is_set(out_octets_ctrl.operation)
	|| is_set(out_octets_unctrl.operation)
	|| is_set(out_pkt_ctrl.operation)
	|| is_set(out_pkts_untagged.operation)
	|| is_set(out_rx_drop_pkts_ctrl.operation)
	|| is_set(out_rx_drop_pkts_unctrl.operation)
	|| is_set(out_rx_err_pkts_ctrl.operation)
	|| is_set(out_rx_err_pkts_unctrl.operation)
	|| is_set(out_ucast_pkts_ctrl.operation)
	|| is_set(out_ucast_pkts_unctrl.operation)
	|| is_set(transform_error_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-interface-macsec-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_bcast_pkts_ctrl.is_set || is_set(out_bcast_pkts_ctrl.operation)) leaf_name_data.push_back(out_bcast_pkts_ctrl.get_name_leafdata());
    if (out_bcast_pkts_unctrl.is_set || is_set(out_bcast_pkts_unctrl.operation)) leaf_name_data.push_back(out_bcast_pkts_unctrl.get_name_leafdata());
    if (out_drop_pkts_class.is_set || is_set(out_drop_pkts_class.operation)) leaf_name_data.push_back(out_drop_pkts_class.get_name_leafdata());
    if (out_drop_pkts_data.is_set || is_set(out_drop_pkts_data.operation)) leaf_name_data.push_back(out_drop_pkts_data.get_name_leafdata());
    if (out_mcast_pkts_ctrl.is_set || is_set(out_mcast_pkts_ctrl.operation)) leaf_name_data.push_back(out_mcast_pkts_ctrl.get_name_leafdata());
    if (out_mcast_pkts_unctrl.is_set || is_set(out_mcast_pkts_unctrl.operation)) leaf_name_data.push_back(out_mcast_pkts_unctrl.get_name_leafdata());
    if (out_octets_common.is_set || is_set(out_octets_common.operation)) leaf_name_data.push_back(out_octets_common.get_name_leafdata());
    if (out_octets_ctrl.is_set || is_set(out_octets_ctrl.operation)) leaf_name_data.push_back(out_octets_ctrl.get_name_leafdata());
    if (out_octets_unctrl.is_set || is_set(out_octets_unctrl.operation)) leaf_name_data.push_back(out_octets_unctrl.get_name_leafdata());
    if (out_pkt_ctrl.is_set || is_set(out_pkt_ctrl.operation)) leaf_name_data.push_back(out_pkt_ctrl.get_name_leafdata());
    if (out_pkts_untagged.is_set || is_set(out_pkts_untagged.operation)) leaf_name_data.push_back(out_pkts_untagged.get_name_leafdata());
    if (out_rx_drop_pkts_ctrl.is_set || is_set(out_rx_drop_pkts_ctrl.operation)) leaf_name_data.push_back(out_rx_drop_pkts_ctrl.get_name_leafdata());
    if (out_rx_drop_pkts_unctrl.is_set || is_set(out_rx_drop_pkts_unctrl.operation)) leaf_name_data.push_back(out_rx_drop_pkts_unctrl.get_name_leafdata());
    if (out_rx_err_pkts_ctrl.is_set || is_set(out_rx_err_pkts_ctrl.operation)) leaf_name_data.push_back(out_rx_err_pkts_ctrl.get_name_leafdata());
    if (out_rx_err_pkts_unctrl.is_set || is_set(out_rx_err_pkts_unctrl.operation)) leaf_name_data.push_back(out_rx_err_pkts_unctrl.get_name_leafdata());
    if (out_ucast_pkts_ctrl.is_set || is_set(out_ucast_pkts_ctrl.operation)) leaf_name_data.push_back(out_ucast_pkts_ctrl.get_name_leafdata());
    if (out_ucast_pkts_unctrl.is_set || is_set(out_ucast_pkts_unctrl.operation)) leaf_name_data.push_back(out_ucast_pkts_unctrl.get_name_leafdata());
    if (transform_error_pkts.is_set || is_set(transform_error_pkts.operation)) leaf_name_data.push_back(transform_error_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-bcast-pkts-ctrl")
    {
        out_bcast_pkts_ctrl = value;
    }
    if(value_path == "out-bcast-pkts-unctrl")
    {
        out_bcast_pkts_unctrl = value;
    }
    if(value_path == "out-drop-pkts-class")
    {
        out_drop_pkts_class = value;
    }
    if(value_path == "out-drop-pkts-data")
    {
        out_drop_pkts_data = value;
    }
    if(value_path == "out-mcast-pkts-ctrl")
    {
        out_mcast_pkts_ctrl = value;
    }
    if(value_path == "out-mcast-pkts-unctrl")
    {
        out_mcast_pkts_unctrl = value;
    }
    if(value_path == "out-octets-common")
    {
        out_octets_common = value;
    }
    if(value_path == "out-octets-ctrl")
    {
        out_octets_ctrl = value;
    }
    if(value_path == "out-octets-unctrl")
    {
        out_octets_unctrl = value;
    }
    if(value_path == "out-pkt-ctrl")
    {
        out_pkt_ctrl = value;
    }
    if(value_path == "out-pkts-untagged")
    {
        out_pkts_untagged = value;
    }
    if(value_path == "out-rx-drop-pkts-ctrl")
    {
        out_rx_drop_pkts_ctrl = value;
    }
    if(value_path == "out-rx-drop-pkts-unctrl")
    {
        out_rx_drop_pkts_unctrl = value;
    }
    if(value_path == "out-rx-err-pkts-ctrl")
    {
        out_rx_err_pkts_ctrl = value;
    }
    if(value_path == "out-rx-err-pkts-unctrl")
    {
        out_rx_err_pkts_unctrl = value;
    }
    if(value_path == "out-ucast-pkts-ctrl")
    {
        out_ucast_pkts_ctrl = value;
    }
    if(value_path == "out-ucast-pkts-unctrl")
    {
        out_ucast_pkts_unctrl = value;
    }
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats::RxInterfaceMacsecStats()
    :
    	in_bcast_pkts_ctrl{YType::uint64, "in-bcast-pkts-ctrl"},
	 in_bcast_pkts_unctrl{YType::uint64, "in-bcast-pkts-unctrl"},
	 in_drop_pkts_class{YType::uint64, "in-drop-pkts-class"},
	 in_drop_pkts_data{YType::uint64, "in-drop-pkts-data"},
	 in_mcast_pkts_ctrl{YType::uint64, "in-mcast-pkts-ctrl"},
	 in_mcast_pkts_unctrl{YType::uint64, "in-mcast-pkts-unctrl"},
	 in_octets_ctrl{YType::uint64, "in-octets-ctrl"},
	 in_octets_unctrl{YType::uint64, "in-octets-unctrl"},
	 in_pkt_bad_tag{YType::uint64, "in-pkt-bad-tag"},
	 in_pkt_ctrl{YType::uint64, "in-pkt-ctrl"},
	 in_pkt_no_sci{YType::uint64, "in-pkt-no-sci"},
	 in_pkt_no_tag{YType::uint64, "in-pkt-no-tag"},
	 in_pkts_tagged_ctrl{YType::uint64, "in-pkts-tagged-ctrl"},
	 in_pkts_unknown_sci{YType::uint64, "in-pkts-unknown-sci"},
	 in_pkts_untagged{YType::uint64, "in-pkts-untagged"},
	 in_rx_drop_pkts_ctrl{YType::uint64, "in-rx-drop-pkts-ctrl"},
	 in_rx_drop_pkts_unctrl{YType::uint64, "in-rx-drop-pkts-unctrl"},
	 in_rx_error_pkts_ctrl{YType::uint64, "in-rx-error-pkts-ctrl"},
	 in_rx_error_pkts_unctrl{YType::uint64, "in-rx-error-pkts-unctrl"},
	 in_ucast_pkts_ctrl{YType::uint64, "in-ucast-pkts-ctrl"},
	 in_ucast_pkts_unctrl{YType::uint64, "in-ucast-pkts-unctrl"},
	 transform_error_pkts{YType::uint64, "transform-error-pkts"}
{
    yang_name = "rx-interface-macsec-stats"; yang_parent_name = "es200-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats::~RxInterfaceMacsecStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats::has_data() const
{
    return in_bcast_pkts_ctrl.is_set
	|| in_bcast_pkts_unctrl.is_set
	|| in_drop_pkts_class.is_set
	|| in_drop_pkts_data.is_set
	|| in_mcast_pkts_ctrl.is_set
	|| in_mcast_pkts_unctrl.is_set
	|| in_octets_ctrl.is_set
	|| in_octets_unctrl.is_set
	|| in_pkt_bad_tag.is_set
	|| in_pkt_ctrl.is_set
	|| in_pkt_no_sci.is_set
	|| in_pkt_no_tag.is_set
	|| in_pkts_tagged_ctrl.is_set
	|| in_pkts_unknown_sci.is_set
	|| in_pkts_untagged.is_set
	|| in_rx_drop_pkts_ctrl.is_set
	|| in_rx_drop_pkts_unctrl.is_set
	|| in_rx_error_pkts_ctrl.is_set
	|| in_rx_error_pkts_unctrl.is_set
	|| in_ucast_pkts_ctrl.is_set
	|| in_ucast_pkts_unctrl.is_set
	|| transform_error_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_bcast_pkts_ctrl.operation)
	|| is_set(in_bcast_pkts_unctrl.operation)
	|| is_set(in_drop_pkts_class.operation)
	|| is_set(in_drop_pkts_data.operation)
	|| is_set(in_mcast_pkts_ctrl.operation)
	|| is_set(in_mcast_pkts_unctrl.operation)
	|| is_set(in_octets_ctrl.operation)
	|| is_set(in_octets_unctrl.operation)
	|| is_set(in_pkt_bad_tag.operation)
	|| is_set(in_pkt_ctrl.operation)
	|| is_set(in_pkt_no_sci.operation)
	|| is_set(in_pkt_no_tag.operation)
	|| is_set(in_pkts_tagged_ctrl.operation)
	|| is_set(in_pkts_unknown_sci.operation)
	|| is_set(in_pkts_untagged.operation)
	|| is_set(in_rx_drop_pkts_ctrl.operation)
	|| is_set(in_rx_drop_pkts_unctrl.operation)
	|| is_set(in_rx_error_pkts_ctrl.operation)
	|| is_set(in_rx_error_pkts_unctrl.operation)
	|| is_set(in_ucast_pkts_ctrl.operation)
	|| is_set(in_ucast_pkts_unctrl.operation)
	|| is_set(transform_error_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-interface-macsec-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_bcast_pkts_ctrl.is_set || is_set(in_bcast_pkts_ctrl.operation)) leaf_name_data.push_back(in_bcast_pkts_ctrl.get_name_leafdata());
    if (in_bcast_pkts_unctrl.is_set || is_set(in_bcast_pkts_unctrl.operation)) leaf_name_data.push_back(in_bcast_pkts_unctrl.get_name_leafdata());
    if (in_drop_pkts_class.is_set || is_set(in_drop_pkts_class.operation)) leaf_name_data.push_back(in_drop_pkts_class.get_name_leafdata());
    if (in_drop_pkts_data.is_set || is_set(in_drop_pkts_data.operation)) leaf_name_data.push_back(in_drop_pkts_data.get_name_leafdata());
    if (in_mcast_pkts_ctrl.is_set || is_set(in_mcast_pkts_ctrl.operation)) leaf_name_data.push_back(in_mcast_pkts_ctrl.get_name_leafdata());
    if (in_mcast_pkts_unctrl.is_set || is_set(in_mcast_pkts_unctrl.operation)) leaf_name_data.push_back(in_mcast_pkts_unctrl.get_name_leafdata());
    if (in_octets_ctrl.is_set || is_set(in_octets_ctrl.operation)) leaf_name_data.push_back(in_octets_ctrl.get_name_leafdata());
    if (in_octets_unctrl.is_set || is_set(in_octets_unctrl.operation)) leaf_name_data.push_back(in_octets_unctrl.get_name_leafdata());
    if (in_pkt_bad_tag.is_set || is_set(in_pkt_bad_tag.operation)) leaf_name_data.push_back(in_pkt_bad_tag.get_name_leafdata());
    if (in_pkt_ctrl.is_set || is_set(in_pkt_ctrl.operation)) leaf_name_data.push_back(in_pkt_ctrl.get_name_leafdata());
    if (in_pkt_no_sci.is_set || is_set(in_pkt_no_sci.operation)) leaf_name_data.push_back(in_pkt_no_sci.get_name_leafdata());
    if (in_pkt_no_tag.is_set || is_set(in_pkt_no_tag.operation)) leaf_name_data.push_back(in_pkt_no_tag.get_name_leafdata());
    if (in_pkts_tagged_ctrl.is_set || is_set(in_pkts_tagged_ctrl.operation)) leaf_name_data.push_back(in_pkts_tagged_ctrl.get_name_leafdata());
    if (in_pkts_unknown_sci.is_set || is_set(in_pkts_unknown_sci.operation)) leaf_name_data.push_back(in_pkts_unknown_sci.get_name_leafdata());
    if (in_pkts_untagged.is_set || is_set(in_pkts_untagged.operation)) leaf_name_data.push_back(in_pkts_untagged.get_name_leafdata());
    if (in_rx_drop_pkts_ctrl.is_set || is_set(in_rx_drop_pkts_ctrl.operation)) leaf_name_data.push_back(in_rx_drop_pkts_ctrl.get_name_leafdata());
    if (in_rx_drop_pkts_unctrl.is_set || is_set(in_rx_drop_pkts_unctrl.operation)) leaf_name_data.push_back(in_rx_drop_pkts_unctrl.get_name_leafdata());
    if (in_rx_error_pkts_ctrl.is_set || is_set(in_rx_error_pkts_ctrl.operation)) leaf_name_data.push_back(in_rx_error_pkts_ctrl.get_name_leafdata());
    if (in_rx_error_pkts_unctrl.is_set || is_set(in_rx_error_pkts_unctrl.operation)) leaf_name_data.push_back(in_rx_error_pkts_unctrl.get_name_leafdata());
    if (in_ucast_pkts_ctrl.is_set || is_set(in_ucast_pkts_ctrl.operation)) leaf_name_data.push_back(in_ucast_pkts_ctrl.get_name_leafdata());
    if (in_ucast_pkts_unctrl.is_set || is_set(in_ucast_pkts_unctrl.operation)) leaf_name_data.push_back(in_ucast_pkts_unctrl.get_name_leafdata());
    if (transform_error_pkts.is_set || is_set(transform_error_pkts.operation)) leaf_name_data.push_back(transform_error_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-bcast-pkts-ctrl")
    {
        in_bcast_pkts_ctrl = value;
    }
    if(value_path == "in-bcast-pkts-unctrl")
    {
        in_bcast_pkts_unctrl = value;
    }
    if(value_path == "in-drop-pkts-class")
    {
        in_drop_pkts_class = value;
    }
    if(value_path == "in-drop-pkts-data")
    {
        in_drop_pkts_data = value;
    }
    if(value_path == "in-mcast-pkts-ctrl")
    {
        in_mcast_pkts_ctrl = value;
    }
    if(value_path == "in-mcast-pkts-unctrl")
    {
        in_mcast_pkts_unctrl = value;
    }
    if(value_path == "in-octets-ctrl")
    {
        in_octets_ctrl = value;
    }
    if(value_path == "in-octets-unctrl")
    {
        in_octets_unctrl = value;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag = value;
    }
    if(value_path == "in-pkt-ctrl")
    {
        in_pkt_ctrl = value;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci = value;
    }
    if(value_path == "in-pkt-no-tag")
    {
        in_pkt_no_tag = value;
    }
    if(value_path == "in-pkts-tagged-ctrl")
    {
        in_pkts_tagged_ctrl = value;
    }
    if(value_path == "in-pkts-unknown-sci")
    {
        in_pkts_unknown_sci = value;
    }
    if(value_path == "in-pkts-untagged")
    {
        in_pkts_untagged = value;
    }
    if(value_path == "in-rx-drop-pkts-ctrl")
    {
        in_rx_drop_pkts_ctrl = value;
    }
    if(value_path == "in-rx-drop-pkts-unctrl")
    {
        in_rx_drop_pkts_unctrl = value;
    }
    if(value_path == "in-rx-error-pkts-ctrl")
    {
        in_rx_error_pkts_ctrl = value;
    }
    if(value_path == "in-rx-error-pkts-unctrl")
    {
        in_rx_error_pkts_unctrl = value;
    }
    if(value_path == "in-ucast-pkts-ctrl")
    {
        in_ucast_pkts_ctrl = value;
    }
    if(value_path == "in-ucast-pkts-unctrl")
    {
        in_ucast_pkts_unctrl = value;
    }
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::Es200Stats()
    :
    rx_interface_macsec_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats>())
	,rx_sa_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats>())
	,tx_interface_macsec_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats>())
	,tx_sa_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats>())
{
    rx_interface_macsec_stats->parent = this;
    children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();

    rx_sa_stats->parent = this;
    children["rx-sa-stats"] = rx_sa_stats.get();

    tx_interface_macsec_stats->parent = this;
    children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();

    tx_sa_stats->parent = this;
    children["tx-sa-stats"] = tx_sa_stats.get();

    yang_name = "es200-stats"; yang_parent_name = "hw-statistics";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::~Es200Stats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::has_data() const
{
    return (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_data())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_data())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_data())
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::has_operation() const
{
    return is_set(operation)
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_operation())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_operation())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_operation())
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-interface-macsec-stats")
    {
        if(rx_interface_macsec_stats != nullptr)
        {
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
        else
        {
            rx_interface_macsec_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats>();
            rx_interface_macsec_stats->parent = this;
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
        return children.at("rx-interface-macsec-stats");
    }

    if(child_yang_name == "rx-sa-stats")
    {
        if(rx_sa_stats != nullptr)
        {
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
        else
        {
            rx_sa_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats>();
            rx_sa_stats->parent = this;
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
        return children.at("rx-sa-stats");
    }

    if(child_yang_name == "tx-interface-macsec-stats")
    {
        if(tx_interface_macsec_stats != nullptr)
        {
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
        else
        {
            tx_interface_macsec_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats>();
            tx_interface_macsec_stats->parent = this;
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
        return children.at("tx-interface-macsec-stats");
    }

    if(child_yang_name == "tx-sa-stats")
    {
        if(tx_sa_stats != nullptr)
        {
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
        else
        {
            tx_sa_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats>();
            tx_sa_stats->parent = this;
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
        return children.at("tx-sa-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::get_children()
{
    if(children.find("rx-interface-macsec-stats") == children.end())
    {
        if(rx_interface_macsec_stats != nullptr)
        {
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
    }

    if(children.find("rx-sa-stats") == children.end())
    {
        if(rx_sa_stats != nullptr)
        {
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
    }

    if(children.find("tx-interface-macsec-stats") == children.end())
    {
        if(tx_interface_macsec_stats != nullptr)
        {
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
    }

    if(children.find("tx-sa-stats") == children.end())
    {
        if(tx_sa_stats != nullptr)
        {
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::HwStatistics()
    :
    	hw_type{YType::uint8, "hw-type"}
    	,
    es200_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats>())
	,msfpga_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats>())
	,xlfpga_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats>())
{
    es200_stats->parent = this;
    children["es200-stats"] = es200_stats.get();

    msfpga_stats->parent = this;
    children["msfpga-stats"] = msfpga_stats.get();

    xlfpga_stats->parent = this;
    children["xlfpga-stats"] = xlfpga_stats.get();

    yang_name = "hw-statistics"; yang_parent_name = "interface";
}

Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::~HwStatistics()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::has_data() const
{
    return hw_type.is_set
	|| (es200_stats !=  nullptr && es200_stats->has_data())
	|| (msfpga_stats !=  nullptr && msfpga_stats->has_data())
	|| (xlfpga_stats !=  nullptr && xlfpga_stats->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(hw_type.operation)
	|| (es200_stats !=  nullptr && es200_stats->has_operation())
	|| (msfpga_stats !=  nullptr && msfpga_stats->has_operation())
	|| (xlfpga_stats !=  nullptr && xlfpga_stats->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-statistics";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_type.is_set || is_set(hw_type.operation)) leaf_name_data.push_back(hw_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es200-stats")
    {
        if(es200_stats != nullptr)
        {
            children["es200-stats"] = es200_stats.get();
        }
        else
        {
            es200_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats>();
            es200_stats->parent = this;
            children["es200-stats"] = es200_stats.get();
        }
        return children.at("es200-stats");
    }

    if(child_yang_name == "msfpga-stats")
    {
        if(msfpga_stats != nullptr)
        {
            children["msfpga-stats"] = msfpga_stats.get();
        }
        else
        {
            msfpga_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats>();
            msfpga_stats->parent = this;
            children["msfpga-stats"] = msfpga_stats.get();
        }
        return children.at("msfpga-stats");
    }

    if(child_yang_name == "xlfpga-stats")
    {
        if(xlfpga_stats != nullptr)
        {
            children["xlfpga-stats"] = xlfpga_stats.get();
        }
        else
        {
            xlfpga_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats>();
            xlfpga_stats->parent = this;
            children["xlfpga-stats"] = xlfpga_stats.get();
        }
        return children.at("xlfpga-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::get_children()
{
    if(children.find("es200-stats") == children.end())
    {
        if(es200_stats != nullptr)
        {
            children["es200-stats"] = es200_stats.get();
        }
    }

    if(children.find("msfpga-stats") == children.end())
    {
        if(msfpga_stats != nullptr)
        {
            children["msfpga-stats"] = msfpga_stats.get();
        }
    }

    if(children.find("xlfpga-stats") == children.end())
    {
        if(xlfpga_stats != nullptr)
        {
            children["xlfpga-stats"] = xlfpga_stats.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hw-type")
    {
        hw_type = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa::TxSa()
    :
    	action{YType::uint8, "action"},
	 an{YType::uint8, "an"},
	 c_offset{YType::uint8, "c-offset"},
	 crypto_algo{YType::uint8, "crypto-algo"},
	 in_use{YType::boolean, "in-use"},
	 is_egress{YType::boolean, "is-egress"},
	 key_len{YType::uint8, "key-len"},
	 next_pn{YType::uint64, "next-pn"},
	 q_bit{YType::boolean, "q-bit"},
	 qq_bit{YType::boolean, "qq-bit"},
	 sa_id{YType::uint8, "sa-id"},
	 sci{YType::uint64, "sci"},
	 valid{YType::boolean, "valid"},
	 xpn{YType::uint8, "xpn"}
{
    yang_name = "tx-sa"; yang_parent_name = "msfpga-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa::~TxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa::has_data() const
{
    return action.is_set
	|| an.is_set
	|| c_offset.is_set
	|| crypto_algo.is_set
	|| in_use.is_set
	|| is_egress.is_set
	|| key_len.is_set
	|| next_pn.is_set
	|| q_bit.is_set
	|| qq_bit.is_set
	|| sa_id.is_set
	|| sci.is_set
	|| valid.is_set
	|| xpn.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(an.operation)
	|| is_set(c_offset.operation)
	|| is_set(crypto_algo.operation)
	|| is_set(in_use.operation)
	|| is_set(is_egress.operation)
	|| is_set(key_len.operation)
	|| is_set(next_pn.operation)
	|| is_set(q_bit.operation)
	|| is_set(qq_bit.operation)
	|| is_set(sa_id.operation)
	|| is_set(sci.operation)
	|| is_set(valid.operation)
	|| is_set(xpn.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (c_offset.is_set || is_set(c_offset.operation)) leaf_name_data.push_back(c_offset.get_name_leafdata());
    if (crypto_algo.is_set || is_set(crypto_algo.operation)) leaf_name_data.push_back(crypto_algo.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.operation)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.operation)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (key_len.is_set || is_set(key_len.operation)) leaf_name_data.push_back(key_len.get_name_leafdata());
    if (next_pn.is_set || is_set(next_pn.operation)) leaf_name_data.push_back(next_pn.get_name_leafdata());
    if (q_bit.is_set || is_set(q_bit.operation)) leaf_name_data.push_back(q_bit.get_name_leafdata());
    if (qq_bit.is_set || is_set(qq_bit.operation)) leaf_name_data.push_back(qq_bit.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (xpn.is_set || is_set(xpn.operation)) leaf_name_data.push_back(xpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "c-offset")
    {
        c_offset = value;
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo = value;
    }
    if(value_path == "in-use")
    {
        in_use = value;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
    }
    if(value_path == "key-len")
    {
        key_len = value;
    }
    if(value_path == "next-pn")
    {
        next_pn = value;
    }
    if(value_path == "q-bit")
    {
        q_bit = value;
    }
    if(value_path == "qq-bit")
    {
        qq_bit = value;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
    if(value_path == "xpn")
    {
        xpn = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa::RxSa()
    :
    	action{YType::uint8, "action"},
	 an{YType::uint8, "an"},
	 c_offset{YType::uint8, "c-offset"},
	 crypto_algo{YType::uint8, "crypto-algo"},
	 in_use{YType::boolean, "in-use"},
	 is_egress{YType::boolean, "is-egress"},
	 key_len{YType::uint8, "key-len"},
	 next_pn{YType::uint64, "next-pn"},
	 q_bit{YType::boolean, "q-bit"},
	 qq_bit{YType::boolean, "qq-bit"},
	 sa_id{YType::uint8, "sa-id"},
	 sci{YType::uint64, "sci"},
	 valid{YType::boolean, "valid"},
	 xpn{YType::uint8, "xpn"}
{
    yang_name = "rx-sa"; yang_parent_name = "msfpga-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa::~RxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa::has_data() const
{
    return action.is_set
	|| an.is_set
	|| c_offset.is_set
	|| crypto_algo.is_set
	|| in_use.is_set
	|| is_egress.is_set
	|| key_len.is_set
	|| next_pn.is_set
	|| q_bit.is_set
	|| qq_bit.is_set
	|| sa_id.is_set
	|| sci.is_set
	|| valid.is_set
	|| xpn.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(an.operation)
	|| is_set(c_offset.operation)
	|| is_set(crypto_algo.operation)
	|| is_set(in_use.operation)
	|| is_set(is_egress.operation)
	|| is_set(key_len.operation)
	|| is_set(next_pn.operation)
	|| is_set(q_bit.operation)
	|| is_set(qq_bit.operation)
	|| is_set(sa_id.operation)
	|| is_set(sci.operation)
	|| is_set(valid.operation)
	|| is_set(xpn.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (c_offset.is_set || is_set(c_offset.operation)) leaf_name_data.push_back(c_offset.get_name_leafdata());
    if (crypto_algo.is_set || is_set(crypto_algo.operation)) leaf_name_data.push_back(crypto_algo.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.operation)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.operation)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (key_len.is_set || is_set(key_len.operation)) leaf_name_data.push_back(key_len.get_name_leafdata());
    if (next_pn.is_set || is_set(next_pn.operation)) leaf_name_data.push_back(next_pn.get_name_leafdata());
    if (q_bit.is_set || is_set(q_bit.operation)) leaf_name_data.push_back(q_bit.get_name_leafdata());
    if (qq_bit.is_set || is_set(qq_bit.operation)) leaf_name_data.push_back(qq_bit.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (xpn.is_set || is_set(xpn.operation)) leaf_name_data.push_back(xpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "c-offset")
    {
        c_offset = value;
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo = value;
    }
    if(value_path == "in-use")
    {
        in_use = value;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
    }
    if(value_path == "key-len")
    {
        key_len = value;
    }
    if(value_path == "next-pn")
    {
        next_pn = value;
    }
    if(value_path == "q-bit")
    {
        q_bit = value;
    }
    if(value_path == "qq-bit")
    {
        qq_bit = value;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
    if(value_path == "xpn")
    {
        xpn = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::MsfpgaSa()
    :
    rx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa>())
	,tx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa>())
{
    rx_sa->parent = this;
    children["rx-sa"] = rx_sa.get();

    tx_sa->parent = this;
    children["tx-sa"] = tx_sa.get();

    yang_name = "msfpga-sa"; yang_parent_name = "sw-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::~MsfpgaSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::has_data() const
{
    return (rx_sa !=  nullptr && rx_sa->has_data())
	|| (tx_sa !=  nullptr && tx_sa->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::has_operation() const
{
    return is_set(operation)
	|| (rx_sa !=  nullptr && rx_sa->has_operation())
	|| (tx_sa !=  nullptr && tx_sa->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-sa")
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
        else
        {
            rx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa>();
            rx_sa->parent = this;
            children["rx-sa"] = rx_sa.get();
        }
        return children.at("rx-sa");
    }

    if(child_yang_name == "tx-sa")
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
        else
        {
            tx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa>();
            tx_sa->parent = this;
            children["tx-sa"] = tx_sa.get();
        }
        return children.at("tx-sa");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::get_children()
{
    if(children.find("rx-sa") == children.end())
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
    }

    if(children.find("tx-sa") == children.end())
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa::TxSa()
    :
    	an{YType::uint8, "an"},
	 cipher_suite{YType::uint32, "cipher-suite"},
	 confidentiality_offset{YType::uint8, "confidentiality-offset"},
	 crc_value{YType::uint32, "crc-value"},
	 current_packet_num{YType::uint64, "current-packet-num"},
	 fcs_err_cfg{YType::uint8, "fcs-err-cfg"},
	 initial_packet_number{YType::uint64, "initial-packet-number"},
	 max_packet_num{YType::uint64, "max-packet-num"},
	 protection_enable{YType::boolean, "protection-enable"},
	 sectag_length{YType::uint32, "sectag-length"},
	 secure_channel_id{YType::uint64, "secure-channel-id"},
	 secure_mode{YType::uint8, "secure-mode"},
	 ssci{YType::uint32, "ssci"}
{
    yang_name = "tx-sa"; yang_parent_name = "xlfpga-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa::~TxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa::has_data() const
{
    return an.is_set
	|| cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| crc_value.is_set
	|| current_packet_num.is_set
	|| fcs_err_cfg.is_set
	|| initial_packet_number.is_set
	|| max_packet_num.is_set
	|| protection_enable.is_set
	|| sectag_length.is_set
	|| secure_channel_id.is_set
	|| secure_mode.is_set
	|| ssci.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(an.operation)
	|| is_set(cipher_suite.operation)
	|| is_set(confidentiality_offset.operation)
	|| is_set(crc_value.operation)
	|| is_set(current_packet_num.operation)
	|| is_set(fcs_err_cfg.operation)
	|| is_set(initial_packet_number.operation)
	|| is_set(max_packet_num.operation)
	|| is_set(protection_enable.operation)
	|| is_set(sectag_length.operation)
	|| is_set(secure_channel_id.operation)
	|| is_set(secure_mode.operation)
	|| is_set(ssci.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.operation)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.operation)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (crc_value.is_set || is_set(crc_value.operation)) leaf_name_data.push_back(crc_value.get_name_leafdata());
    if (current_packet_num.is_set || is_set(current_packet_num.operation)) leaf_name_data.push_back(current_packet_num.get_name_leafdata());
    if (fcs_err_cfg.is_set || is_set(fcs_err_cfg.operation)) leaf_name_data.push_back(fcs_err_cfg.get_name_leafdata());
    if (initial_packet_number.is_set || is_set(initial_packet_number.operation)) leaf_name_data.push_back(initial_packet_number.get_name_leafdata());
    if (max_packet_num.is_set || is_set(max_packet_num.operation)) leaf_name_data.push_back(max_packet_num.get_name_leafdata());
    if (protection_enable.is_set || is_set(protection_enable.operation)) leaf_name_data.push_back(protection_enable.get_name_leafdata());
    if (sectag_length.is_set || is_set(sectag_length.operation)) leaf_name_data.push_back(sectag_length.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.operation)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (secure_mode.is_set || is_set(secure_mode.operation)) leaf_name_data.push_back(secure_mode.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.operation)) leaf_name_data.push_back(ssci.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
    }
    if(value_path == "crc-value")
    {
        crc_value = value;
    }
    if(value_path == "current-packet-num")
    {
        current_packet_num = value;
    }
    if(value_path == "fcs-err-cfg")
    {
        fcs_err_cfg = value;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number = value;
    }
    if(value_path == "max-packet-num")
    {
        max_packet_num = value;
    }
    if(value_path == "protection-enable")
    {
        protection_enable = value;
    }
    if(value_path == "sectag-length")
    {
        sectag_length = value;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
    }
    if(value_path == "secure-mode")
    {
        secure_mode = value;
    }
    if(value_path == "ssci")
    {
        ssci = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa::RxSa()
    :
    	an{YType::str, "an"},
	 auth_err_cfg{YType::uint32, "auth-err-cfg"},
	 cipher_suite{YType::uint32, "cipher-suite"},
	 confidentiality_offset{YType::uint8, "confidentiality-offset"},
	 crc_value{YType::uint32, "crc-value"},
	 current_packet_num{YType::uint64, "current-packet-num"},
	 fcs_err_cfg{YType::uint32, "fcs-err-cfg"},
	 lowest_acceptable_packet_num{YType::uint64, "lowest-acceptable-packet-num"},
	 max_packet_num{YType::uint64, "max-packet-num"},
	 next_expected_packet_num{YType::uint64, "next-expected-packet-num"},
	 num_an_in_use{YType::uint32, "num-an-in-use"},
	 pkt_tagged_detected{YType::boolean, "pkt-tagged-detected"},
	 pkt_tagged_validated{YType::boolean, "pkt-tagged-validated"},
	 pkt_untagged_detected{YType::boolean, "pkt-untagged-detected"},
	 protection_enable{YType::boolean, "protection-enable"},
	 recent_an{YType::uint8, "recent-an"},
	 replay_protect_mode{YType::boolean, "replay-protect-mode"},
	 replay_window{YType::uint32, "replay-window"},
	 secure_channel_id{YType::uint64, "secure-channel-id"},
	 secure_mode{YType::uint32, "secure-mode"},
	 ssci{YType::uint32, "ssci"},
	 validation_mode{YType::uint32, "validation-mode"}
{
    yang_name = "rx-sa"; yang_parent_name = "xlfpga-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa::~RxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa::has_data() const
{
    for (auto const & leaf : crc_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ssci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return an.is_set
	|| auth_err_cfg.is_set
	|| cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| current_packet_num.is_set
	|| fcs_err_cfg.is_set
	|| lowest_acceptable_packet_num.is_set
	|| max_packet_num.is_set
	|| next_expected_packet_num.is_set
	|| num_an_in_use.is_set
	|| pkt_tagged_detected.is_set
	|| pkt_tagged_validated.is_set
	|| pkt_untagged_detected.is_set
	|| protection_enable.is_set
	|| recent_an.is_set
	|| replay_protect_mode.is_set
	|| replay_window.is_set
	|| secure_channel_id.is_set
	|| secure_mode.is_set
	|| validation_mode.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa::has_operation() const
{
    for (auto const & leaf : crc_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ssci.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(an.operation)
	|| is_set(auth_err_cfg.operation)
	|| is_set(cipher_suite.operation)
	|| is_set(confidentiality_offset.operation)
	|| is_set(crc_value.operation)
	|| is_set(current_packet_num.operation)
	|| is_set(fcs_err_cfg.operation)
	|| is_set(lowest_acceptable_packet_num.operation)
	|| is_set(max_packet_num.operation)
	|| is_set(next_expected_packet_num.operation)
	|| is_set(num_an_in_use.operation)
	|| is_set(pkt_tagged_detected.operation)
	|| is_set(pkt_tagged_validated.operation)
	|| is_set(pkt_untagged_detected.operation)
	|| is_set(protection_enable.operation)
	|| is_set(recent_an.operation)
	|| is_set(replay_protect_mode.operation)
	|| is_set(replay_window.operation)
	|| is_set(secure_channel_id.operation)
	|| is_set(secure_mode.operation)
	|| is_set(ssci.operation)
	|| is_set(validation_mode.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (auth_err_cfg.is_set || is_set(auth_err_cfg.operation)) leaf_name_data.push_back(auth_err_cfg.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.operation)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.operation)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (current_packet_num.is_set || is_set(current_packet_num.operation)) leaf_name_data.push_back(current_packet_num.get_name_leafdata());
    if (fcs_err_cfg.is_set || is_set(fcs_err_cfg.operation)) leaf_name_data.push_back(fcs_err_cfg.get_name_leafdata());
    if (lowest_acceptable_packet_num.is_set || is_set(lowest_acceptable_packet_num.operation)) leaf_name_data.push_back(lowest_acceptable_packet_num.get_name_leafdata());
    if (max_packet_num.is_set || is_set(max_packet_num.operation)) leaf_name_data.push_back(max_packet_num.get_name_leafdata());
    if (next_expected_packet_num.is_set || is_set(next_expected_packet_num.operation)) leaf_name_data.push_back(next_expected_packet_num.get_name_leafdata());
    if (num_an_in_use.is_set || is_set(num_an_in_use.operation)) leaf_name_data.push_back(num_an_in_use.get_name_leafdata());
    if (pkt_tagged_detected.is_set || is_set(pkt_tagged_detected.operation)) leaf_name_data.push_back(pkt_tagged_detected.get_name_leafdata());
    if (pkt_tagged_validated.is_set || is_set(pkt_tagged_validated.operation)) leaf_name_data.push_back(pkt_tagged_validated.get_name_leafdata());
    if (pkt_untagged_detected.is_set || is_set(pkt_untagged_detected.operation)) leaf_name_data.push_back(pkt_untagged_detected.get_name_leafdata());
    if (protection_enable.is_set || is_set(protection_enable.operation)) leaf_name_data.push_back(protection_enable.get_name_leafdata());
    if (recent_an.is_set || is_set(recent_an.operation)) leaf_name_data.push_back(recent_an.get_name_leafdata());
    if (replay_protect_mode.is_set || is_set(replay_protect_mode.operation)) leaf_name_data.push_back(replay_protect_mode.get_name_leafdata());
    if (replay_window.is_set || is_set(replay_window.operation)) leaf_name_data.push_back(replay_window.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.operation)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (secure_mode.is_set || is_set(secure_mode.operation)) leaf_name_data.push_back(secure_mode.get_name_leafdata());
    if (validation_mode.is_set || is_set(validation_mode.operation)) leaf_name_data.push_back(validation_mode.get_name_leafdata());

    auto crc_value_name_datas = crc_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), crc_value_name_datas.begin(), crc_value_name_datas.end());
    auto ssci_name_datas = ssci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ssci_name_datas.begin(), ssci_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "auth-err-cfg")
    {
        auth_err_cfg = value;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
    }
    if(value_path == "crc-value")
    {
        crc_value.append(value);
    }
    if(value_path == "current-packet-num")
    {
        current_packet_num = value;
    }
    if(value_path == "fcs-err-cfg")
    {
        fcs_err_cfg = value;
    }
    if(value_path == "lowest-acceptable-packet-num")
    {
        lowest_acceptable_packet_num = value;
    }
    if(value_path == "max-packet-num")
    {
        max_packet_num = value;
    }
    if(value_path == "next-expected-packet-num")
    {
        next_expected_packet_num = value;
    }
    if(value_path == "num-an-in-use")
    {
        num_an_in_use = value;
    }
    if(value_path == "pkt-tagged-detected")
    {
        pkt_tagged_detected = value;
    }
    if(value_path == "pkt-tagged-validated")
    {
        pkt_tagged_validated = value;
    }
    if(value_path == "pkt-untagged-detected")
    {
        pkt_untagged_detected = value;
    }
    if(value_path == "protection-enable")
    {
        protection_enable = value;
    }
    if(value_path == "recent-an")
    {
        recent_an = value;
    }
    if(value_path == "replay-protect-mode")
    {
        replay_protect_mode = value;
    }
    if(value_path == "replay-window")
    {
        replay_window = value;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
    }
    if(value_path == "secure-mode")
    {
        secure_mode = value;
    }
    if(value_path == "ssci")
    {
        ssci.append(value);
    }
    if(value_path == "validation-mode")
    {
        validation_mode = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::XlfpgaSa()
    :
    rx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa>())
	,tx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa>())
{
    rx_sa->parent = this;
    children["rx-sa"] = rx_sa.get();

    tx_sa->parent = this;
    children["tx-sa"] = tx_sa.get();

    yang_name = "xlfpga-sa"; yang_parent_name = "sw-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::~XlfpgaSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::has_data() const
{
    return (rx_sa !=  nullptr && rx_sa->has_data())
	|| (tx_sa !=  nullptr && tx_sa->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::has_operation() const
{
    return is_set(operation)
	|| (rx_sa !=  nullptr && rx_sa->has_operation())
	|| (tx_sa !=  nullptr && tx_sa->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xlfpga-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-sa")
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
        else
        {
            rx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa>();
            rx_sa->parent = this;
            children["rx-sa"] = rx_sa.get();
        }
        return children.at("rx-sa");
    }

    if(child_yang_name == "tx-sa")
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
        else
        {
            tx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa>();
            tx_sa->parent = this;
            children["tx-sa"] = tx_sa.get();
        }
        return children.at("tx-sa");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::get_children()
{
    if(children.find("rx-sa") == children.end())
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
    }

    if(children.find("tx-sa") == children.end())
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams::XformParams()
    :
    	aes_key_len{YType::uint32, "aes-key-len"},
	 assoc_num{YType::uint8, "assoc-num"},
	 bgen_auth_key{YType::boolean, "bgen-auth-key"},
	 crypt_algo{YType::uint32, "crypt-algo"},
	 is_egress_tr{YType::boolean, "is-egress-tr"},
	 is_seq_num64_bit{YType::boolean, "is-seq-num64-bit"},
	 replay_win_size{YType::uint32, "replay-win-size"}
{
    yang_name = "xform-params"; yang_parent_name = "tx-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams::~XformParams()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams::has_data() const
{
    return aes_key_len.is_set
	|| assoc_num.is_set
	|| bgen_auth_key.is_set
	|| crypt_algo.is_set
	|| is_egress_tr.is_set
	|| is_seq_num64_bit.is_set
	|| replay_win_size.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams::has_operation() const
{
    return is_set(operation)
	|| is_set(aes_key_len.operation)
	|| is_set(assoc_num.operation)
	|| is_set(bgen_auth_key.operation)
	|| is_set(crypt_algo.operation)
	|| is_set(is_egress_tr.operation)
	|| is_set(is_seq_num64_bit.operation)
	|| is_set(replay_win_size.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xform-params";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes_key_len.is_set || is_set(aes_key_len.operation)) leaf_name_data.push_back(aes_key_len.get_name_leafdata());
    if (assoc_num.is_set || is_set(assoc_num.operation)) leaf_name_data.push_back(assoc_num.get_name_leafdata());
    if (bgen_auth_key.is_set || is_set(bgen_auth_key.operation)) leaf_name_data.push_back(bgen_auth_key.get_name_leafdata());
    if (crypt_algo.is_set || is_set(crypt_algo.operation)) leaf_name_data.push_back(crypt_algo.get_name_leafdata());
    if (is_egress_tr.is_set || is_set(is_egress_tr.operation)) leaf_name_data.push_back(is_egress_tr.get_name_leafdata());
    if (is_seq_num64_bit.is_set || is_set(is_seq_num64_bit.operation)) leaf_name_data.push_back(is_seq_num64_bit.get_name_leafdata());
    if (replay_win_size.is_set || is_set(replay_win_size.operation)) leaf_name_data.push_back(replay_win_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aes-key-len")
    {
        aes_key_len = value;
    }
    if(value_path == "assoc-num")
    {
        assoc_num = value;
    }
    if(value_path == "bgen-auth-key")
    {
        bgen_auth_key = value;
    }
    if(value_path == "crypt-algo")
    {
        crypt_algo = value;
    }
    if(value_path == "is-egress-tr")
    {
        is_egress_tr = value;
    }
    if(value_path == "is-seq-num64-bit")
    {
        is_seq_num64_bit = value;
    }
    if(value_path == "replay-win-size")
    {
        replay_win_size = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::TxSa()
    :
    	is_valid{YType::boolean, "is-valid"},
	 out_octets_encrypted_protected1{YType::uint8, "out-octets-encrypted-protected1"},
	 out_octets_encrypted_protected2{YType::uint8, "out-octets-encrypted-protected2"},
	 out_pkts_encrypted_protected{YType::uint8, "out-pkts-encrypted-protected"},
	 out_pkts_sa_not_in_use{YType::uint8, "out-pkts-sa-not-in-use"},
	 out_pkts_too_long{YType::uint8, "out-pkts-too-long"},
	 sa_id{YType::uint8, "sa-id"},
	 sc_no{YType::uint32, "sc-no"}
    	,
    xform_params(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams>())
{
    xform_params->parent = this;
    children["xform-params"] = xform_params.get();

    yang_name = "tx-sa"; yang_parent_name = "es200-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::~TxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::has_data() const
{
    return is_valid.is_set
	|| out_octets_encrypted_protected1.is_set
	|| out_octets_encrypted_protected2.is_set
	|| out_pkts_encrypted_protected.is_set
	|| out_pkts_sa_not_in_use.is_set
	|| out_pkts_too_long.is_set
	|| sa_id.is_set
	|| sc_no.is_set
	|| (xform_params !=  nullptr && xform_params->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| is_set(out_octets_encrypted_protected1.operation)
	|| is_set(out_octets_encrypted_protected2.operation)
	|| is_set(out_pkts_encrypted_protected.operation)
	|| is_set(out_pkts_sa_not_in_use.operation)
	|| is_set(out_pkts_too_long.operation)
	|| is_set(sa_id.operation)
	|| is_set(sc_no.operation)
	|| (xform_params !=  nullptr && xform_params->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (out_octets_encrypted_protected1.is_set || is_set(out_octets_encrypted_protected1.operation)) leaf_name_data.push_back(out_octets_encrypted_protected1.get_name_leafdata());
    if (out_octets_encrypted_protected2.is_set || is_set(out_octets_encrypted_protected2.operation)) leaf_name_data.push_back(out_octets_encrypted_protected2.get_name_leafdata());
    if (out_pkts_encrypted_protected.is_set || is_set(out_pkts_encrypted_protected.operation)) leaf_name_data.push_back(out_pkts_encrypted_protected.get_name_leafdata());
    if (out_pkts_sa_not_in_use.is_set || is_set(out_pkts_sa_not_in_use.operation)) leaf_name_data.push_back(out_pkts_sa_not_in_use.get_name_leafdata());
    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.operation)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sc_no.is_set || is_set(sc_no.operation)) leaf_name_data.push_back(sc_no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xform-params")
    {
        if(xform_params != nullptr)
        {
            children["xform-params"] = xform_params.get();
        }
        else
        {
            xform_params = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams>();
            xform_params->parent = this;
            children["xform-params"] = xform_params.get();
        }
        return children.at("xform-params");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::get_children()
{
    if(children.find("xform-params") == children.end())
    {
        if(xform_params != nullptr)
        {
            children["xform-params"] = xform_params.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1 = value;
    }
    if(value_path == "out-octets-encrypted-protected2")
    {
        out_octets_encrypted_protected2 = value;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected = value;
    }
    if(value_path == "out-pkts-sa-not-in-use")
    {
        out_pkts_sa_not_in_use = value;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "sc-no")
    {
        sc_no = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams::XformParams()
    :
    	aes_key_len{YType::uint32, "aes-key-len"},
	 assoc_num{YType::uint8, "assoc-num"},
	 bgen_auth_key{YType::boolean, "bgen-auth-key"},
	 crypt_algo{YType::uint32, "crypt-algo"},
	 is_egress_tr{YType::boolean, "is-egress-tr"},
	 is_seq_num64_bit{YType::boolean, "is-seq-num64-bit"},
	 replay_win_size{YType::uint32, "replay-win-size"}
{
    yang_name = "xform-params"; yang_parent_name = "rx-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams::~XformParams()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams::has_data() const
{
    return aes_key_len.is_set
	|| assoc_num.is_set
	|| bgen_auth_key.is_set
	|| crypt_algo.is_set
	|| is_egress_tr.is_set
	|| is_seq_num64_bit.is_set
	|| replay_win_size.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams::has_operation() const
{
    return is_set(operation)
	|| is_set(aes_key_len.operation)
	|| is_set(assoc_num.operation)
	|| is_set(bgen_auth_key.operation)
	|| is_set(crypt_algo.operation)
	|| is_set(is_egress_tr.operation)
	|| is_set(is_seq_num64_bit.operation)
	|| is_set(replay_win_size.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xform-params";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes_key_len.is_set || is_set(aes_key_len.operation)) leaf_name_data.push_back(aes_key_len.get_name_leafdata());
    if (assoc_num.is_set || is_set(assoc_num.operation)) leaf_name_data.push_back(assoc_num.get_name_leafdata());
    if (bgen_auth_key.is_set || is_set(bgen_auth_key.operation)) leaf_name_data.push_back(bgen_auth_key.get_name_leafdata());
    if (crypt_algo.is_set || is_set(crypt_algo.operation)) leaf_name_data.push_back(crypt_algo.get_name_leafdata());
    if (is_egress_tr.is_set || is_set(is_egress_tr.operation)) leaf_name_data.push_back(is_egress_tr.get_name_leafdata());
    if (is_seq_num64_bit.is_set || is_set(is_seq_num64_bit.operation)) leaf_name_data.push_back(is_seq_num64_bit.get_name_leafdata());
    if (replay_win_size.is_set || is_set(replay_win_size.operation)) leaf_name_data.push_back(replay_win_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aes-key-len")
    {
        aes_key_len = value;
    }
    if(value_path == "assoc-num")
    {
        assoc_num = value;
    }
    if(value_path == "bgen-auth-key")
    {
        bgen_auth_key = value;
    }
    if(value_path == "crypt-algo")
    {
        crypt_algo = value;
    }
    if(value_path == "is-egress-tr")
    {
        is_egress_tr = value;
    }
    if(value_path == "is-seq-num64-bit")
    {
        is_seq_num64_bit = value;
    }
    if(value_path == "replay-win-size")
    {
        replay_win_size = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::RxSa()
    :
    	in_octets_decrypted_validated1{YType::uint8, "in-octets-decrypted-validated1"},
	 in_octets_decrypted_validated2{YType::uint8, "in-octets-decrypted-validated2"},
	 in_octets_validated{YType::uint8, "in-octets-validated"},
	 in_pkts_delayed{YType::uint8, "in-pkts-delayed"},
	 in_pkts_invalid{YType::uint8, "in-pkts-invalid"},
	 in_pkts_late{YType::uint8, "in-pkts-late"},
	 in_pkts_not_using_sa{YType::uint8, "in-pkts-not-using-sa"},
	 in_pkts_not_valid{YType::uint8, "in-pkts-not-valid"},
	 in_pkts_ok{YType::uint8, "in-pkts-ok"},
	 in_pkts_unchecked{YType::uint8, "in-pkts-unchecked"},
	 in_pkts_unused_sa{YType::uint8, "in-pkts-unused-sa"},
	 is_valid{YType::boolean, "is-valid"},
	 sa_id{YType::uint8, "sa-id"},
	 sc_no{YType::uint32, "sc-no"}
    	,
    xform_params(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams>())
{
    xform_params->parent = this;
    children["xform-params"] = xform_params.get();

    yang_name = "rx-sa"; yang_parent_name = "es200-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::~RxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::has_data() const
{
    return in_octets_decrypted_validated1.is_set
	|| in_octets_decrypted_validated2.is_set
	|| in_octets_validated.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_late.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_unchecked.is_set
	|| in_pkts_unused_sa.is_set
	|| is_valid.is_set
	|| sa_id.is_set
	|| sc_no.is_set
	|| (xform_params !=  nullptr && xform_params->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(in_octets_decrypted_validated1.operation)
	|| is_set(in_octets_decrypted_validated2.operation)
	|| is_set(in_octets_validated.operation)
	|| is_set(in_pkts_delayed.operation)
	|| is_set(in_pkts_invalid.operation)
	|| is_set(in_pkts_late.operation)
	|| is_set(in_pkts_not_using_sa.operation)
	|| is_set(in_pkts_not_valid.operation)
	|| is_set(in_pkts_ok.operation)
	|| is_set(in_pkts_unchecked.operation)
	|| is_set(in_pkts_unused_sa.operation)
	|| is_set(is_valid.operation)
	|| is_set(sa_id.operation)
	|| is_set(sc_no.operation)
	|| (xform_params !=  nullptr && xform_params->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_octets_decrypted_validated1.is_set || is_set(in_octets_decrypted_validated1.operation)) leaf_name_data.push_back(in_octets_decrypted_validated1.get_name_leafdata());
    if (in_octets_decrypted_validated2.is_set || is_set(in_octets_decrypted_validated2.operation)) leaf_name_data.push_back(in_octets_decrypted_validated2.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.operation)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.operation)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.operation)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.operation)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.operation)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.operation)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.operation)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.operation)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.operation)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sc_no.is_set || is_set(sc_no.operation)) leaf_name_data.push_back(sc_no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xform-params")
    {
        if(xform_params != nullptr)
        {
            children["xform-params"] = xform_params.get();
        }
        else
        {
            xform_params = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams>();
            xform_params->parent = this;
            children["xform-params"] = xform_params.get();
        }
        return children.at("xform-params");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::get_children()
{
    if(children.find("xform-params") == children.end())
    {
        if(xform_params != nullptr)
        {
            children["xform-params"] = xform_params.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1 = value;
    }
    if(value_path == "in-octets-decrypted-validated2")
    {
        in_octets_decrypted_validated2 = value;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "sc-no")
    {
        sc_no = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::Es200Sa()
    :
    rx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa>())
	,tx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa>())
{
    rx_sa->parent = this;
    children["rx-sa"] = rx_sa.get();

    tx_sa->parent = this;
    children["tx-sa"] = tx_sa.get();

    yang_name = "es200-sa"; yang_parent_name = "sw-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::~Es200Sa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::has_data() const
{
    return (rx_sa !=  nullptr && rx_sa->has_data())
	|| (tx_sa !=  nullptr && tx_sa->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::has_operation() const
{
    return is_set(operation)
	|| (rx_sa !=  nullptr && rx_sa->has_operation())
	|| (tx_sa !=  nullptr && tx_sa->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-sa")
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
        else
        {
            rx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa>();
            rx_sa->parent = this;
            children["rx-sa"] = rx_sa.get();
        }
        return children.at("rx-sa");
    }

    if(child_yang_name == "tx-sa")
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
        else
        {
            tx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa>();
            tx_sa->parent = this;
            children["tx-sa"] = tx_sa.get();
        }
        return children.at("tx-sa");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::get_children()
{
    if(children.find("rx-sa") == children.end())
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
    }

    if(children.find("tx-sa") == children.end())
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::SwSa()
    :
    	sa_id{YType::int32, "sa-id"},
	 hw_type{YType::uint8, "hw-type"}
    	,
    es200_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa>())
	,msfpga_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa>())
	,xlfpga_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa>())
{
    es200_sa->parent = this;
    children["es200-sa"] = es200_sa.get();

    msfpga_sa->parent = this;
    children["msfpga-sa"] = msfpga_sa.get();

    xlfpga_sa->parent = this;
    children["xlfpga-sa"] = xlfpga_sa.get();

    yang_name = "sw-sa"; yang_parent_name = "sw-sas";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::~SwSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::has_data() const
{
    return sa_id.is_set
	|| hw_type.is_set
	|| (es200_sa !=  nullptr && es200_sa->has_data())
	|| (msfpga_sa !=  nullptr && msfpga_sa->has_data())
	|| (xlfpga_sa !=  nullptr && xlfpga_sa->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::has_operation() const
{
    return is_set(operation)
	|| is_set(sa_id.operation)
	|| is_set(hw_type.operation)
	|| (es200_sa !=  nullptr && es200_sa->has_operation())
	|| (msfpga_sa !=  nullptr && msfpga_sa->has_operation())
	|| (xlfpga_sa !=  nullptr && xlfpga_sa->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-sa" <<"[sa-id='" <<sa_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (hw_type.is_set || is_set(hw_type.operation)) leaf_name_data.push_back(hw_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es200-sa")
    {
        if(es200_sa != nullptr)
        {
            children["es200-sa"] = es200_sa.get();
        }
        else
        {
            es200_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa>();
            es200_sa->parent = this;
            children["es200-sa"] = es200_sa.get();
        }
        return children.at("es200-sa");
    }

    if(child_yang_name == "msfpga-sa")
    {
        if(msfpga_sa != nullptr)
        {
            children["msfpga-sa"] = msfpga_sa.get();
        }
        else
        {
            msfpga_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa>();
            msfpga_sa->parent = this;
            children["msfpga-sa"] = msfpga_sa.get();
        }
        return children.at("msfpga-sa");
    }

    if(child_yang_name == "xlfpga-sa")
    {
        if(xlfpga_sa != nullptr)
        {
            children["xlfpga-sa"] = xlfpga_sa.get();
        }
        else
        {
            xlfpga_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa>();
            xlfpga_sa->parent = this;
            children["xlfpga-sa"] = xlfpga_sa.get();
        }
        return children.at("xlfpga-sa");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::get_children()
{
    if(children.find("es200-sa") == children.end())
    {
        if(es200_sa != nullptr)
        {
            children["es200-sa"] = es200_sa.get();
        }
    }

    if(children.find("msfpga-sa") == children.end())
    {
        if(msfpga_sa != nullptr)
        {
            children["msfpga-sa"] = msfpga_sa.get();
        }
    }

    if(children.find("xlfpga-sa") == children.end())
    {
        if(xlfpga_sa != nullptr)
        {
            children["xlfpga-sa"] = xlfpga_sa.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "hw-type")
    {
        hw_type = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSas()
{
    yang_name = "sw-sas"; yang_parent_name = "interface";
}

Macsec::Nodes::Node::Interfaces::Interface::SwSas::~SwSas()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::has_data() const
{
    for (std::size_t index=0; index<sw_sa.size(); index++)
    {
        if(sw_sa[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwSas::has_operation() const
{
    for (std::size_t index=0; index<sw_sa.size(); index++)
    {
        if(sw_sa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwSas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-sas";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwSas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwSas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sw-sa")
    {
        for(auto const & c : sw_sa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa>();
        c->parent = this;
        sw_sa.push_back(std::move(c));
        children[segment_path] = sw_sa.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwSas::get_children()
{
    for (auto const & c : sw_sa)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwSas::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa::TxSa()
    :
    	action{YType::uint8, "action"},
	 an{YType::uint8, "an"},
	 c_offset{YType::uint8, "c-offset"},
	 crypto_algo{YType::uint8, "crypto-algo"},
	 in_use{YType::boolean, "in-use"},
	 is_egress{YType::boolean, "is-egress"},
	 key_len{YType::uint8, "key-len"},
	 next_pn{YType::uint64, "next-pn"},
	 q_bit{YType::boolean, "q-bit"},
	 qq_bit{YType::boolean, "qq-bit"},
	 sa_id{YType::uint8, "sa-id"},
	 sci{YType::uint64, "sci"},
	 valid{YType::boolean, "valid"},
	 xpn{YType::uint8, "xpn"}
{
    yang_name = "tx-sa"; yang_parent_name = "msfpga-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa::~TxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa::has_data() const
{
    return action.is_set
	|| an.is_set
	|| c_offset.is_set
	|| crypto_algo.is_set
	|| in_use.is_set
	|| is_egress.is_set
	|| key_len.is_set
	|| next_pn.is_set
	|| q_bit.is_set
	|| qq_bit.is_set
	|| sa_id.is_set
	|| sci.is_set
	|| valid.is_set
	|| xpn.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(an.operation)
	|| is_set(c_offset.operation)
	|| is_set(crypto_algo.operation)
	|| is_set(in_use.operation)
	|| is_set(is_egress.operation)
	|| is_set(key_len.operation)
	|| is_set(next_pn.operation)
	|| is_set(q_bit.operation)
	|| is_set(qq_bit.operation)
	|| is_set(sa_id.operation)
	|| is_set(sci.operation)
	|| is_set(valid.operation)
	|| is_set(xpn.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (c_offset.is_set || is_set(c_offset.operation)) leaf_name_data.push_back(c_offset.get_name_leafdata());
    if (crypto_algo.is_set || is_set(crypto_algo.operation)) leaf_name_data.push_back(crypto_algo.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.operation)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.operation)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (key_len.is_set || is_set(key_len.operation)) leaf_name_data.push_back(key_len.get_name_leafdata());
    if (next_pn.is_set || is_set(next_pn.operation)) leaf_name_data.push_back(next_pn.get_name_leafdata());
    if (q_bit.is_set || is_set(q_bit.operation)) leaf_name_data.push_back(q_bit.get_name_leafdata());
    if (qq_bit.is_set || is_set(qq_bit.operation)) leaf_name_data.push_back(qq_bit.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (xpn.is_set || is_set(xpn.operation)) leaf_name_data.push_back(xpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "c-offset")
    {
        c_offset = value;
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo = value;
    }
    if(value_path == "in-use")
    {
        in_use = value;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
    }
    if(value_path == "key-len")
    {
        key_len = value;
    }
    if(value_path == "next-pn")
    {
        next_pn = value;
    }
    if(value_path == "q-bit")
    {
        q_bit = value;
    }
    if(value_path == "qq-bit")
    {
        qq_bit = value;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
    if(value_path == "xpn")
    {
        xpn = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa::RxSa()
    :
    	action{YType::uint8, "action"},
	 an{YType::uint8, "an"},
	 c_offset{YType::uint8, "c-offset"},
	 crypto_algo{YType::uint8, "crypto-algo"},
	 in_use{YType::boolean, "in-use"},
	 is_egress{YType::boolean, "is-egress"},
	 key_len{YType::uint8, "key-len"},
	 next_pn{YType::uint64, "next-pn"},
	 q_bit{YType::boolean, "q-bit"},
	 qq_bit{YType::boolean, "qq-bit"},
	 sa_id{YType::uint8, "sa-id"},
	 sci{YType::uint64, "sci"},
	 valid{YType::boolean, "valid"},
	 xpn{YType::uint8, "xpn"}
{
    yang_name = "rx-sa"; yang_parent_name = "msfpga-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa::~RxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa::has_data() const
{
    return action.is_set
	|| an.is_set
	|| c_offset.is_set
	|| crypto_algo.is_set
	|| in_use.is_set
	|| is_egress.is_set
	|| key_len.is_set
	|| next_pn.is_set
	|| q_bit.is_set
	|| qq_bit.is_set
	|| sa_id.is_set
	|| sci.is_set
	|| valid.is_set
	|| xpn.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(an.operation)
	|| is_set(c_offset.operation)
	|| is_set(crypto_algo.operation)
	|| is_set(in_use.operation)
	|| is_set(is_egress.operation)
	|| is_set(key_len.operation)
	|| is_set(next_pn.operation)
	|| is_set(q_bit.operation)
	|| is_set(qq_bit.operation)
	|| is_set(sa_id.operation)
	|| is_set(sci.operation)
	|| is_set(valid.operation)
	|| is_set(xpn.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (c_offset.is_set || is_set(c_offset.operation)) leaf_name_data.push_back(c_offset.get_name_leafdata());
    if (crypto_algo.is_set || is_set(crypto_algo.operation)) leaf_name_data.push_back(crypto_algo.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.operation)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.operation)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (key_len.is_set || is_set(key_len.operation)) leaf_name_data.push_back(key_len.get_name_leafdata());
    if (next_pn.is_set || is_set(next_pn.operation)) leaf_name_data.push_back(next_pn.get_name_leafdata());
    if (q_bit.is_set || is_set(q_bit.operation)) leaf_name_data.push_back(q_bit.get_name_leafdata());
    if (qq_bit.is_set || is_set(qq_bit.operation)) leaf_name_data.push_back(qq_bit.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (xpn.is_set || is_set(xpn.operation)) leaf_name_data.push_back(xpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "c-offset")
    {
        c_offset = value;
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo = value;
    }
    if(value_path == "in-use")
    {
        in_use = value;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
    }
    if(value_path == "key-len")
    {
        key_len = value;
    }
    if(value_path == "next-pn")
    {
        next_pn = value;
    }
    if(value_path == "q-bit")
    {
        q_bit = value;
    }
    if(value_path == "qq-bit")
    {
        qq_bit = value;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
    if(value_path == "xpn")
    {
        xpn = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::MsfpgaSa()
    :
    rx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa>())
	,tx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa>())
{
    rx_sa->parent = this;
    children["rx-sa"] = rx_sa.get();

    tx_sa->parent = this;
    children["tx-sa"] = tx_sa.get();

    yang_name = "msfpga-sa"; yang_parent_name = "hw-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::~MsfpgaSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::has_data() const
{
    return (rx_sa !=  nullptr && rx_sa->has_data())
	|| (tx_sa !=  nullptr && tx_sa->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::has_operation() const
{
    return is_set(operation)
	|| (rx_sa !=  nullptr && rx_sa->has_operation())
	|| (tx_sa !=  nullptr && tx_sa->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-sa")
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
        else
        {
            rx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa>();
            rx_sa->parent = this;
            children["rx-sa"] = rx_sa.get();
        }
        return children.at("rx-sa");
    }

    if(child_yang_name == "tx-sa")
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
        else
        {
            tx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa>();
            tx_sa->parent = this;
            children["tx-sa"] = tx_sa.get();
        }
        return children.at("tx-sa");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::get_children()
{
    if(children.find("rx-sa") == children.end())
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
    }

    if(children.find("tx-sa") == children.end())
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa::TxSa()
    :
    	an{YType::uint8, "an"},
	 cipher_suite{YType::uint32, "cipher-suite"},
	 confidentiality_offset{YType::uint8, "confidentiality-offset"},
	 crc_value{YType::uint32, "crc-value"},
	 current_packet_num{YType::uint64, "current-packet-num"},
	 fcs_err_cfg{YType::uint8, "fcs-err-cfg"},
	 initial_packet_number{YType::uint64, "initial-packet-number"},
	 max_packet_num{YType::uint64, "max-packet-num"},
	 protection_enable{YType::boolean, "protection-enable"},
	 sectag_length{YType::uint32, "sectag-length"},
	 secure_channel_id{YType::uint64, "secure-channel-id"},
	 secure_mode{YType::uint8, "secure-mode"},
	 ssci{YType::uint32, "ssci"}
{
    yang_name = "tx-sa"; yang_parent_name = "xlfpga-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa::~TxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa::has_data() const
{
    return an.is_set
	|| cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| crc_value.is_set
	|| current_packet_num.is_set
	|| fcs_err_cfg.is_set
	|| initial_packet_number.is_set
	|| max_packet_num.is_set
	|| protection_enable.is_set
	|| sectag_length.is_set
	|| secure_channel_id.is_set
	|| secure_mode.is_set
	|| ssci.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(an.operation)
	|| is_set(cipher_suite.operation)
	|| is_set(confidentiality_offset.operation)
	|| is_set(crc_value.operation)
	|| is_set(current_packet_num.operation)
	|| is_set(fcs_err_cfg.operation)
	|| is_set(initial_packet_number.operation)
	|| is_set(max_packet_num.operation)
	|| is_set(protection_enable.operation)
	|| is_set(sectag_length.operation)
	|| is_set(secure_channel_id.operation)
	|| is_set(secure_mode.operation)
	|| is_set(ssci.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.operation)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.operation)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (crc_value.is_set || is_set(crc_value.operation)) leaf_name_data.push_back(crc_value.get_name_leafdata());
    if (current_packet_num.is_set || is_set(current_packet_num.operation)) leaf_name_data.push_back(current_packet_num.get_name_leafdata());
    if (fcs_err_cfg.is_set || is_set(fcs_err_cfg.operation)) leaf_name_data.push_back(fcs_err_cfg.get_name_leafdata());
    if (initial_packet_number.is_set || is_set(initial_packet_number.operation)) leaf_name_data.push_back(initial_packet_number.get_name_leafdata());
    if (max_packet_num.is_set || is_set(max_packet_num.operation)) leaf_name_data.push_back(max_packet_num.get_name_leafdata());
    if (protection_enable.is_set || is_set(protection_enable.operation)) leaf_name_data.push_back(protection_enable.get_name_leafdata());
    if (sectag_length.is_set || is_set(sectag_length.operation)) leaf_name_data.push_back(sectag_length.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.operation)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (secure_mode.is_set || is_set(secure_mode.operation)) leaf_name_data.push_back(secure_mode.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.operation)) leaf_name_data.push_back(ssci.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
    }
    if(value_path == "crc-value")
    {
        crc_value = value;
    }
    if(value_path == "current-packet-num")
    {
        current_packet_num = value;
    }
    if(value_path == "fcs-err-cfg")
    {
        fcs_err_cfg = value;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number = value;
    }
    if(value_path == "max-packet-num")
    {
        max_packet_num = value;
    }
    if(value_path == "protection-enable")
    {
        protection_enable = value;
    }
    if(value_path == "sectag-length")
    {
        sectag_length = value;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
    }
    if(value_path == "secure-mode")
    {
        secure_mode = value;
    }
    if(value_path == "ssci")
    {
        ssci = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa::RxSa()
    :
    	an{YType::str, "an"},
	 auth_err_cfg{YType::uint32, "auth-err-cfg"},
	 cipher_suite{YType::uint32, "cipher-suite"},
	 confidentiality_offset{YType::uint8, "confidentiality-offset"},
	 crc_value{YType::uint32, "crc-value"},
	 current_packet_num{YType::uint64, "current-packet-num"},
	 fcs_err_cfg{YType::uint32, "fcs-err-cfg"},
	 lowest_acceptable_packet_num{YType::uint64, "lowest-acceptable-packet-num"},
	 max_packet_num{YType::uint64, "max-packet-num"},
	 next_expected_packet_num{YType::uint64, "next-expected-packet-num"},
	 num_an_in_use{YType::uint32, "num-an-in-use"},
	 pkt_tagged_detected{YType::boolean, "pkt-tagged-detected"},
	 pkt_tagged_validated{YType::boolean, "pkt-tagged-validated"},
	 pkt_untagged_detected{YType::boolean, "pkt-untagged-detected"},
	 protection_enable{YType::boolean, "protection-enable"},
	 recent_an{YType::uint8, "recent-an"},
	 replay_protect_mode{YType::boolean, "replay-protect-mode"},
	 replay_window{YType::uint32, "replay-window"},
	 secure_channel_id{YType::uint64, "secure-channel-id"},
	 secure_mode{YType::uint32, "secure-mode"},
	 ssci{YType::uint32, "ssci"},
	 validation_mode{YType::uint32, "validation-mode"}
{
    yang_name = "rx-sa"; yang_parent_name = "xlfpga-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa::~RxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa::has_data() const
{
    for (auto const & leaf : crc_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ssci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return an.is_set
	|| auth_err_cfg.is_set
	|| cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| current_packet_num.is_set
	|| fcs_err_cfg.is_set
	|| lowest_acceptable_packet_num.is_set
	|| max_packet_num.is_set
	|| next_expected_packet_num.is_set
	|| num_an_in_use.is_set
	|| pkt_tagged_detected.is_set
	|| pkt_tagged_validated.is_set
	|| pkt_untagged_detected.is_set
	|| protection_enable.is_set
	|| recent_an.is_set
	|| replay_protect_mode.is_set
	|| replay_window.is_set
	|| secure_channel_id.is_set
	|| secure_mode.is_set
	|| validation_mode.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa::has_operation() const
{
    for (auto const & leaf : crc_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ssci.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(an.operation)
	|| is_set(auth_err_cfg.operation)
	|| is_set(cipher_suite.operation)
	|| is_set(confidentiality_offset.operation)
	|| is_set(crc_value.operation)
	|| is_set(current_packet_num.operation)
	|| is_set(fcs_err_cfg.operation)
	|| is_set(lowest_acceptable_packet_num.operation)
	|| is_set(max_packet_num.operation)
	|| is_set(next_expected_packet_num.operation)
	|| is_set(num_an_in_use.operation)
	|| is_set(pkt_tagged_detected.operation)
	|| is_set(pkt_tagged_validated.operation)
	|| is_set(pkt_untagged_detected.operation)
	|| is_set(protection_enable.operation)
	|| is_set(recent_an.operation)
	|| is_set(replay_protect_mode.operation)
	|| is_set(replay_window.operation)
	|| is_set(secure_channel_id.operation)
	|| is_set(secure_mode.operation)
	|| is_set(ssci.operation)
	|| is_set(validation_mode.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (auth_err_cfg.is_set || is_set(auth_err_cfg.operation)) leaf_name_data.push_back(auth_err_cfg.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.operation)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.operation)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (current_packet_num.is_set || is_set(current_packet_num.operation)) leaf_name_data.push_back(current_packet_num.get_name_leafdata());
    if (fcs_err_cfg.is_set || is_set(fcs_err_cfg.operation)) leaf_name_data.push_back(fcs_err_cfg.get_name_leafdata());
    if (lowest_acceptable_packet_num.is_set || is_set(lowest_acceptable_packet_num.operation)) leaf_name_data.push_back(lowest_acceptable_packet_num.get_name_leafdata());
    if (max_packet_num.is_set || is_set(max_packet_num.operation)) leaf_name_data.push_back(max_packet_num.get_name_leafdata());
    if (next_expected_packet_num.is_set || is_set(next_expected_packet_num.operation)) leaf_name_data.push_back(next_expected_packet_num.get_name_leafdata());
    if (num_an_in_use.is_set || is_set(num_an_in_use.operation)) leaf_name_data.push_back(num_an_in_use.get_name_leafdata());
    if (pkt_tagged_detected.is_set || is_set(pkt_tagged_detected.operation)) leaf_name_data.push_back(pkt_tagged_detected.get_name_leafdata());
    if (pkt_tagged_validated.is_set || is_set(pkt_tagged_validated.operation)) leaf_name_data.push_back(pkt_tagged_validated.get_name_leafdata());
    if (pkt_untagged_detected.is_set || is_set(pkt_untagged_detected.operation)) leaf_name_data.push_back(pkt_untagged_detected.get_name_leafdata());
    if (protection_enable.is_set || is_set(protection_enable.operation)) leaf_name_data.push_back(protection_enable.get_name_leafdata());
    if (recent_an.is_set || is_set(recent_an.operation)) leaf_name_data.push_back(recent_an.get_name_leafdata());
    if (replay_protect_mode.is_set || is_set(replay_protect_mode.operation)) leaf_name_data.push_back(replay_protect_mode.get_name_leafdata());
    if (replay_window.is_set || is_set(replay_window.operation)) leaf_name_data.push_back(replay_window.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.operation)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (secure_mode.is_set || is_set(secure_mode.operation)) leaf_name_data.push_back(secure_mode.get_name_leafdata());
    if (validation_mode.is_set || is_set(validation_mode.operation)) leaf_name_data.push_back(validation_mode.get_name_leafdata());

    auto crc_value_name_datas = crc_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), crc_value_name_datas.begin(), crc_value_name_datas.end());
    auto ssci_name_datas = ssci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ssci_name_datas.begin(), ssci_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "auth-err-cfg")
    {
        auth_err_cfg = value;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
    }
    if(value_path == "crc-value")
    {
        crc_value.append(value);
    }
    if(value_path == "current-packet-num")
    {
        current_packet_num = value;
    }
    if(value_path == "fcs-err-cfg")
    {
        fcs_err_cfg = value;
    }
    if(value_path == "lowest-acceptable-packet-num")
    {
        lowest_acceptable_packet_num = value;
    }
    if(value_path == "max-packet-num")
    {
        max_packet_num = value;
    }
    if(value_path == "next-expected-packet-num")
    {
        next_expected_packet_num = value;
    }
    if(value_path == "num-an-in-use")
    {
        num_an_in_use = value;
    }
    if(value_path == "pkt-tagged-detected")
    {
        pkt_tagged_detected = value;
    }
    if(value_path == "pkt-tagged-validated")
    {
        pkt_tagged_validated = value;
    }
    if(value_path == "pkt-untagged-detected")
    {
        pkt_untagged_detected = value;
    }
    if(value_path == "protection-enable")
    {
        protection_enable = value;
    }
    if(value_path == "recent-an")
    {
        recent_an = value;
    }
    if(value_path == "replay-protect-mode")
    {
        replay_protect_mode = value;
    }
    if(value_path == "replay-window")
    {
        replay_window = value;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
    }
    if(value_path == "secure-mode")
    {
        secure_mode = value;
    }
    if(value_path == "ssci")
    {
        ssci.append(value);
    }
    if(value_path == "validation-mode")
    {
        validation_mode = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::XlfpgaSa()
    :
    rx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa>())
	,tx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa>())
{
    rx_sa->parent = this;
    children["rx-sa"] = rx_sa.get();

    tx_sa->parent = this;
    children["tx-sa"] = tx_sa.get();

    yang_name = "xlfpga-sa"; yang_parent_name = "hw-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::~XlfpgaSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::has_data() const
{
    return (rx_sa !=  nullptr && rx_sa->has_data())
	|| (tx_sa !=  nullptr && tx_sa->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::has_operation() const
{
    return is_set(operation)
	|| (rx_sa !=  nullptr && rx_sa->has_operation())
	|| (tx_sa !=  nullptr && tx_sa->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xlfpga-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-sa")
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
        else
        {
            rx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa>();
            rx_sa->parent = this;
            children["rx-sa"] = rx_sa.get();
        }
        return children.at("rx-sa");
    }

    if(child_yang_name == "tx-sa")
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
        else
        {
            tx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa>();
            tx_sa->parent = this;
            children["tx-sa"] = tx_sa.get();
        }
        return children.at("tx-sa");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::get_children()
{
    if(children.find("rx-sa") == children.end())
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
    }

    if(children.find("tx-sa") == children.end())
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams::XformParams()
    :
    	aes_key_len{YType::uint32, "aes-key-len"},
	 assoc_num{YType::uint8, "assoc-num"},
	 bgen_auth_key{YType::boolean, "bgen-auth-key"},
	 crypt_algo{YType::uint32, "crypt-algo"},
	 is_egress_tr{YType::boolean, "is-egress-tr"},
	 is_seq_num64_bit{YType::boolean, "is-seq-num64-bit"},
	 replay_win_size{YType::uint32, "replay-win-size"}
{
    yang_name = "xform-params"; yang_parent_name = "tx-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams::~XformParams()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams::has_data() const
{
    return aes_key_len.is_set
	|| assoc_num.is_set
	|| bgen_auth_key.is_set
	|| crypt_algo.is_set
	|| is_egress_tr.is_set
	|| is_seq_num64_bit.is_set
	|| replay_win_size.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams::has_operation() const
{
    return is_set(operation)
	|| is_set(aes_key_len.operation)
	|| is_set(assoc_num.operation)
	|| is_set(bgen_auth_key.operation)
	|| is_set(crypt_algo.operation)
	|| is_set(is_egress_tr.operation)
	|| is_set(is_seq_num64_bit.operation)
	|| is_set(replay_win_size.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xform-params";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes_key_len.is_set || is_set(aes_key_len.operation)) leaf_name_data.push_back(aes_key_len.get_name_leafdata());
    if (assoc_num.is_set || is_set(assoc_num.operation)) leaf_name_data.push_back(assoc_num.get_name_leafdata());
    if (bgen_auth_key.is_set || is_set(bgen_auth_key.operation)) leaf_name_data.push_back(bgen_auth_key.get_name_leafdata());
    if (crypt_algo.is_set || is_set(crypt_algo.operation)) leaf_name_data.push_back(crypt_algo.get_name_leafdata());
    if (is_egress_tr.is_set || is_set(is_egress_tr.operation)) leaf_name_data.push_back(is_egress_tr.get_name_leafdata());
    if (is_seq_num64_bit.is_set || is_set(is_seq_num64_bit.operation)) leaf_name_data.push_back(is_seq_num64_bit.get_name_leafdata());
    if (replay_win_size.is_set || is_set(replay_win_size.operation)) leaf_name_data.push_back(replay_win_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aes-key-len")
    {
        aes_key_len = value;
    }
    if(value_path == "assoc-num")
    {
        assoc_num = value;
    }
    if(value_path == "bgen-auth-key")
    {
        bgen_auth_key = value;
    }
    if(value_path == "crypt-algo")
    {
        crypt_algo = value;
    }
    if(value_path == "is-egress-tr")
    {
        is_egress_tr = value;
    }
    if(value_path == "is-seq-num64-bit")
    {
        is_seq_num64_bit = value;
    }
    if(value_path == "replay-win-size")
    {
        replay_win_size = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::TxSa()
    :
    	is_valid{YType::boolean, "is-valid"},
	 out_octets_encrypted_protected1{YType::uint8, "out-octets-encrypted-protected1"},
	 out_octets_encrypted_protected2{YType::uint8, "out-octets-encrypted-protected2"},
	 out_pkts_encrypted_protected{YType::uint8, "out-pkts-encrypted-protected"},
	 out_pkts_sa_not_in_use{YType::uint8, "out-pkts-sa-not-in-use"},
	 out_pkts_too_long{YType::uint8, "out-pkts-too-long"},
	 sa_id{YType::uint8, "sa-id"},
	 sc_no{YType::uint32, "sc-no"}
    	,
    xform_params(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams>())
{
    xform_params->parent = this;
    children["xform-params"] = xform_params.get();

    yang_name = "tx-sa"; yang_parent_name = "es200-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::~TxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::has_data() const
{
    return is_valid.is_set
	|| out_octets_encrypted_protected1.is_set
	|| out_octets_encrypted_protected2.is_set
	|| out_pkts_encrypted_protected.is_set
	|| out_pkts_sa_not_in_use.is_set
	|| out_pkts_too_long.is_set
	|| sa_id.is_set
	|| sc_no.is_set
	|| (xform_params !=  nullptr && xform_params->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| is_set(out_octets_encrypted_protected1.operation)
	|| is_set(out_octets_encrypted_protected2.operation)
	|| is_set(out_pkts_encrypted_protected.operation)
	|| is_set(out_pkts_sa_not_in_use.operation)
	|| is_set(out_pkts_too_long.operation)
	|| is_set(sa_id.operation)
	|| is_set(sc_no.operation)
	|| (xform_params !=  nullptr && xform_params->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (out_octets_encrypted_protected1.is_set || is_set(out_octets_encrypted_protected1.operation)) leaf_name_data.push_back(out_octets_encrypted_protected1.get_name_leafdata());
    if (out_octets_encrypted_protected2.is_set || is_set(out_octets_encrypted_protected2.operation)) leaf_name_data.push_back(out_octets_encrypted_protected2.get_name_leafdata());
    if (out_pkts_encrypted_protected.is_set || is_set(out_pkts_encrypted_protected.operation)) leaf_name_data.push_back(out_pkts_encrypted_protected.get_name_leafdata());
    if (out_pkts_sa_not_in_use.is_set || is_set(out_pkts_sa_not_in_use.operation)) leaf_name_data.push_back(out_pkts_sa_not_in_use.get_name_leafdata());
    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.operation)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sc_no.is_set || is_set(sc_no.operation)) leaf_name_data.push_back(sc_no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xform-params")
    {
        if(xform_params != nullptr)
        {
            children["xform-params"] = xform_params.get();
        }
        else
        {
            xform_params = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams>();
            xform_params->parent = this;
            children["xform-params"] = xform_params.get();
        }
        return children.at("xform-params");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::get_children()
{
    if(children.find("xform-params") == children.end())
    {
        if(xform_params != nullptr)
        {
            children["xform-params"] = xform_params.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1 = value;
    }
    if(value_path == "out-octets-encrypted-protected2")
    {
        out_octets_encrypted_protected2 = value;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected = value;
    }
    if(value_path == "out-pkts-sa-not-in-use")
    {
        out_pkts_sa_not_in_use = value;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "sc-no")
    {
        sc_no = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams::XformParams()
    :
    	aes_key_len{YType::uint32, "aes-key-len"},
	 assoc_num{YType::uint8, "assoc-num"},
	 bgen_auth_key{YType::boolean, "bgen-auth-key"},
	 crypt_algo{YType::uint32, "crypt-algo"},
	 is_egress_tr{YType::boolean, "is-egress-tr"},
	 is_seq_num64_bit{YType::boolean, "is-seq-num64-bit"},
	 replay_win_size{YType::uint32, "replay-win-size"}
{
    yang_name = "xform-params"; yang_parent_name = "rx-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams::~XformParams()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams::has_data() const
{
    return aes_key_len.is_set
	|| assoc_num.is_set
	|| bgen_auth_key.is_set
	|| crypt_algo.is_set
	|| is_egress_tr.is_set
	|| is_seq_num64_bit.is_set
	|| replay_win_size.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams::has_operation() const
{
    return is_set(operation)
	|| is_set(aes_key_len.operation)
	|| is_set(assoc_num.operation)
	|| is_set(bgen_auth_key.operation)
	|| is_set(crypt_algo.operation)
	|| is_set(is_egress_tr.operation)
	|| is_set(is_seq_num64_bit.operation)
	|| is_set(replay_win_size.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xform-params";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes_key_len.is_set || is_set(aes_key_len.operation)) leaf_name_data.push_back(aes_key_len.get_name_leafdata());
    if (assoc_num.is_set || is_set(assoc_num.operation)) leaf_name_data.push_back(assoc_num.get_name_leafdata());
    if (bgen_auth_key.is_set || is_set(bgen_auth_key.operation)) leaf_name_data.push_back(bgen_auth_key.get_name_leafdata());
    if (crypt_algo.is_set || is_set(crypt_algo.operation)) leaf_name_data.push_back(crypt_algo.get_name_leafdata());
    if (is_egress_tr.is_set || is_set(is_egress_tr.operation)) leaf_name_data.push_back(is_egress_tr.get_name_leafdata());
    if (is_seq_num64_bit.is_set || is_set(is_seq_num64_bit.operation)) leaf_name_data.push_back(is_seq_num64_bit.get_name_leafdata());
    if (replay_win_size.is_set || is_set(replay_win_size.operation)) leaf_name_data.push_back(replay_win_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aes-key-len")
    {
        aes_key_len = value;
    }
    if(value_path == "assoc-num")
    {
        assoc_num = value;
    }
    if(value_path == "bgen-auth-key")
    {
        bgen_auth_key = value;
    }
    if(value_path == "crypt-algo")
    {
        crypt_algo = value;
    }
    if(value_path == "is-egress-tr")
    {
        is_egress_tr = value;
    }
    if(value_path == "is-seq-num64-bit")
    {
        is_seq_num64_bit = value;
    }
    if(value_path == "replay-win-size")
    {
        replay_win_size = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::RxSa()
    :
    	in_octets_decrypted_validated1{YType::uint8, "in-octets-decrypted-validated1"},
	 in_octets_decrypted_validated2{YType::uint8, "in-octets-decrypted-validated2"},
	 in_octets_validated{YType::uint8, "in-octets-validated"},
	 in_pkts_delayed{YType::uint8, "in-pkts-delayed"},
	 in_pkts_invalid{YType::uint8, "in-pkts-invalid"},
	 in_pkts_late{YType::uint8, "in-pkts-late"},
	 in_pkts_not_using_sa{YType::uint8, "in-pkts-not-using-sa"},
	 in_pkts_not_valid{YType::uint8, "in-pkts-not-valid"},
	 in_pkts_ok{YType::uint8, "in-pkts-ok"},
	 in_pkts_unchecked{YType::uint8, "in-pkts-unchecked"},
	 in_pkts_unused_sa{YType::uint8, "in-pkts-unused-sa"},
	 is_valid{YType::boolean, "is-valid"},
	 sa_id{YType::uint8, "sa-id"},
	 sc_no{YType::uint32, "sc-no"}
    	,
    xform_params(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams>())
{
    xform_params->parent = this;
    children["xform-params"] = xform_params.get();

    yang_name = "rx-sa"; yang_parent_name = "es200-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::~RxSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::has_data() const
{
    return in_octets_decrypted_validated1.is_set
	|| in_octets_decrypted_validated2.is_set
	|| in_octets_validated.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_late.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_unchecked.is_set
	|| in_pkts_unused_sa.is_set
	|| is_valid.is_set
	|| sa_id.is_set
	|| sc_no.is_set
	|| (xform_params !=  nullptr && xform_params->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::has_operation() const
{
    return is_set(operation)
	|| is_set(in_octets_decrypted_validated1.operation)
	|| is_set(in_octets_decrypted_validated2.operation)
	|| is_set(in_octets_validated.operation)
	|| is_set(in_pkts_delayed.operation)
	|| is_set(in_pkts_invalid.operation)
	|| is_set(in_pkts_late.operation)
	|| is_set(in_pkts_not_using_sa.operation)
	|| is_set(in_pkts_not_valid.operation)
	|| is_set(in_pkts_ok.operation)
	|| is_set(in_pkts_unchecked.operation)
	|| is_set(in_pkts_unused_sa.operation)
	|| is_set(is_valid.operation)
	|| is_set(sa_id.operation)
	|| is_set(sc_no.operation)
	|| (xform_params !=  nullptr && xform_params->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_octets_decrypted_validated1.is_set || is_set(in_octets_decrypted_validated1.operation)) leaf_name_data.push_back(in_octets_decrypted_validated1.get_name_leafdata());
    if (in_octets_decrypted_validated2.is_set || is_set(in_octets_decrypted_validated2.operation)) leaf_name_data.push_back(in_octets_decrypted_validated2.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.operation)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.operation)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.operation)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.operation)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.operation)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.operation)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.operation)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.operation)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.operation)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sc_no.is_set || is_set(sc_no.operation)) leaf_name_data.push_back(sc_no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xform-params")
    {
        if(xform_params != nullptr)
        {
            children["xform-params"] = xform_params.get();
        }
        else
        {
            xform_params = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams>();
            xform_params->parent = this;
            children["xform-params"] = xform_params.get();
        }
        return children.at("xform-params");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::get_children()
{
    if(children.find("xform-params") == children.end())
    {
        if(xform_params != nullptr)
        {
            children["xform-params"] = xform_params.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1 = value;
    }
    if(value_path == "in-octets-decrypted-validated2")
    {
        in_octets_decrypted_validated2 = value;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "sc-no")
    {
        sc_no = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::Es200Sa()
    :
    rx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa>())
	,tx_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa>())
{
    rx_sa->parent = this;
    children["rx-sa"] = rx_sa.get();

    tx_sa->parent = this;
    children["tx-sa"] = tx_sa.get();

    yang_name = "es200-sa"; yang_parent_name = "hw-sa";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::~Es200Sa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::has_data() const
{
    return (rx_sa !=  nullptr && rx_sa->has_data())
	|| (tx_sa !=  nullptr && tx_sa->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::has_operation() const
{
    return is_set(operation)
	|| (rx_sa !=  nullptr && rx_sa->has_operation())
	|| (tx_sa !=  nullptr && tx_sa->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-sa";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-sa")
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
        else
        {
            rx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa>();
            rx_sa->parent = this;
            children["rx-sa"] = rx_sa.get();
        }
        return children.at("rx-sa");
    }

    if(child_yang_name == "tx-sa")
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
        else
        {
            tx_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa>();
            tx_sa->parent = this;
            children["tx-sa"] = tx_sa.get();
        }
        return children.at("tx-sa");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::get_children()
{
    if(children.find("rx-sa") == children.end())
    {
        if(rx_sa != nullptr)
        {
            children["rx-sa"] = rx_sa.get();
        }
    }

    if(children.find("tx-sa") == children.end())
    {
        if(tx_sa != nullptr)
        {
            children["tx-sa"] = tx_sa.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::HwSa()
    :
    	sa_id{YType::int32, "sa-id"},
	 hw_type{YType::uint8, "hw-type"}
    	,
    es200_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa>())
	,msfpga_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa>())
	,xlfpga_sa(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa>())
{
    es200_sa->parent = this;
    children["es200-sa"] = es200_sa.get();

    msfpga_sa->parent = this;
    children["msfpga-sa"] = msfpga_sa.get();

    xlfpga_sa->parent = this;
    children["xlfpga-sa"] = xlfpga_sa.get();

    yang_name = "hw-sa"; yang_parent_name = "hw-sas";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::~HwSa()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::has_data() const
{
    return sa_id.is_set
	|| hw_type.is_set
	|| (es200_sa !=  nullptr && es200_sa->has_data())
	|| (msfpga_sa !=  nullptr && msfpga_sa->has_data())
	|| (xlfpga_sa !=  nullptr && xlfpga_sa->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::has_operation() const
{
    return is_set(operation)
	|| is_set(sa_id.operation)
	|| is_set(hw_type.operation)
	|| (es200_sa !=  nullptr && es200_sa->has_operation())
	|| (msfpga_sa !=  nullptr && msfpga_sa->has_operation())
	|| (xlfpga_sa !=  nullptr && xlfpga_sa->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-sa" <<"[sa-id='" <<sa_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_id.is_set || is_set(sa_id.operation)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (hw_type.is_set || is_set(hw_type.operation)) leaf_name_data.push_back(hw_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es200-sa")
    {
        if(es200_sa != nullptr)
        {
            children["es200-sa"] = es200_sa.get();
        }
        else
        {
            es200_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa>();
            es200_sa->parent = this;
            children["es200-sa"] = es200_sa.get();
        }
        return children.at("es200-sa");
    }

    if(child_yang_name == "msfpga-sa")
    {
        if(msfpga_sa != nullptr)
        {
            children["msfpga-sa"] = msfpga_sa.get();
        }
        else
        {
            msfpga_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa>();
            msfpga_sa->parent = this;
            children["msfpga-sa"] = msfpga_sa.get();
        }
        return children.at("msfpga-sa");
    }

    if(child_yang_name == "xlfpga-sa")
    {
        if(xlfpga_sa != nullptr)
        {
            children["xlfpga-sa"] = xlfpga_sa.get();
        }
        else
        {
            xlfpga_sa = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa>();
            xlfpga_sa->parent = this;
            children["xlfpga-sa"] = xlfpga_sa.get();
        }
        return children.at("xlfpga-sa");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::get_children()
{
    if(children.find("es200-sa") == children.end())
    {
        if(es200_sa != nullptr)
        {
            children["es200-sa"] = es200_sa.get();
        }
    }

    if(children.find("msfpga-sa") == children.end())
    {
        if(msfpga_sa != nullptr)
        {
            children["msfpga-sa"] = msfpga_sa.get();
        }
    }

    if(children.find("xlfpga-sa") == children.end())
    {
        if(xlfpga_sa != nullptr)
        {
            children["xlfpga-sa"] = xlfpga_sa.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sa-id")
    {
        sa_id = value;
    }
    if(value_path == "hw-type")
    {
        hw_type = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSas()
{
    yang_name = "hw-sas"; yang_parent_name = "interface";
}

Macsec::Nodes::Node::Interfaces::Interface::HwSas::~HwSas()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::has_data() const
{
    for (std::size_t index=0; index<hw_sa.size(); index++)
    {
        if(hw_sa[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwSas::has_operation() const
{
    for (std::size_t index=0; index<hw_sa.size(); index++)
    {
        if(hw_sa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwSas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-sas";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwSas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwSas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hw-sa")
    {
        for(auto const & c : hw_sa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa>();
        c->parent = this;
        hw_sa.push_back(std::move(c));
        children[segment_path] = hw_sa.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwSas::get_children()
{
    for (auto const & c : hw_sa)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwSas::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow::TxFlow()
    :
    	action{YType::uint8, "action"},
	 ctrl_check{YType::boolean, "ctrl-check"},
	 dmac_inuse{YType::boolean, "dmac-inuse"},
	 ethertype{YType::uint16, "ethertype"},
	 flow_id{YType::uint8, "flow-id"},
	 in_use{YType::boolean, "in-use"},
	 inner_vlan{YType::uint16, "inner-vlan"},
	 inner_vlan_tpid{YType::uint16, "inner-vlan-tpid"},
	 inner_vlan_up{YType::uint8, "inner-vlan-up"},
	 is_ctrl_pkt{YType::boolean, "is-ctrl-pkt"},
	 is_egress{YType::boolean, "is-egress"},
	 macda{YType::uint8, "macda"},
	 macsa{YType::uint8, "macsa"},
	 match_bad_tag{YType::boolean, "match-bad-tag"},
	 match_kay_tag{YType::boolean, "match-kay-tag"},
	 match_pri{YType::uint8, "match-pri"},
	 match_tagged{YType::boolean, "match-tagged"},
	 match_untagged{YType::boolean, "match-untagged"},
	 outer_vlan{YType::uint16, "outer-vlan"},
	 outer_vlan_tpid{YType::uint16, "outer-vlan-tpid"},
	 outer_vlan_up{YType::uint8, "outer-vlan-up"},
	 sai{YType::uint32, "sai"},
	 sci{YType::uint64, "sci"},
	 sci_inuse{YType::boolean, "sci-inuse"},
	 smac_inuse{YType::boolean, "smac-inuse"},
	 source_port{YType::uint32, "source-port"},
	 source_port_chk{YType::boolean, "source-port-chk"},
	 tci{YType::uint8, "tci"},
	 tci_an{YType::uint8, "tci-an"},
	 tci_an_chk{YType::boolean, "tci-an-chk"},
	 tci_c{YType::uint8, "tci-c"},
	 tci_chk{YType::boolean, "tci-chk"},
	 tci_e_xr{YType::uint8, "tci-e-xr"},
	 tci_sc{YType::uint8, "tci-sc"},
	 tci_scb{YType::uint8, "tci-scb"},
	 tci_v{YType::uint8, "tci-v"},
	 valid{YType::boolean, "valid"}
{
    yang_name = "tx-flow"; yang_parent_name = "msfpga-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow::~TxFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow::has_data() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action.is_set
	|| ctrl_check.is_set
	|| dmac_inuse.is_set
	|| ethertype.is_set
	|| flow_id.is_set
	|| in_use.is_set
	|| inner_vlan.is_set
	|| inner_vlan_tpid.is_set
	|| inner_vlan_up.is_set
	|| is_ctrl_pkt.is_set
	|| is_egress.is_set
	|| match_bad_tag.is_set
	|| match_kay_tag.is_set
	|| match_pri.is_set
	|| match_tagged.is_set
	|| match_untagged.is_set
	|| outer_vlan.is_set
	|| outer_vlan_tpid.is_set
	|| outer_vlan_up.is_set
	|| sai.is_set
	|| sci.is_set
	|| sci_inuse.is_set
	|| smac_inuse.is_set
	|| source_port.is_set
	|| source_port_chk.is_set
	|| tci.is_set
	|| tci_an.is_set
	|| tci_an_chk.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci_v.is_set
	|| valid.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(ctrl_check.operation)
	|| is_set(dmac_inuse.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_id.operation)
	|| is_set(in_use.operation)
	|| is_set(inner_vlan.operation)
	|| is_set(inner_vlan_tpid.operation)
	|| is_set(inner_vlan_up.operation)
	|| is_set(is_ctrl_pkt.operation)
	|| is_set(is_egress.operation)
	|| is_set(macda.operation)
	|| is_set(macsa.operation)
	|| is_set(match_bad_tag.operation)
	|| is_set(match_kay_tag.operation)
	|| is_set(match_pri.operation)
	|| is_set(match_tagged.operation)
	|| is_set(match_untagged.operation)
	|| is_set(outer_vlan.operation)
	|| is_set(outer_vlan_tpid.operation)
	|| is_set(outer_vlan_up.operation)
	|| is_set(sai.operation)
	|| is_set(sci.operation)
	|| is_set(sci_inuse.operation)
	|| is_set(smac_inuse.operation)
	|| is_set(source_port.operation)
	|| is_set(source_port_chk.operation)
	|| is_set(tci.operation)
	|| is_set(tci_an.operation)
	|| is_set(tci_an_chk.operation)
	|| is_set(tci_c.operation)
	|| is_set(tci_chk.operation)
	|| is_set(tci_e_xr.operation)
	|| is_set(tci_sc.operation)
	|| is_set(tci_scb.operation)
	|| is_set(tci_v.operation)
	|| is_set(valid.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (ctrl_check.is_set || is_set(ctrl_check.operation)) leaf_name_data.push_back(ctrl_check.get_name_leafdata());
    if (dmac_inuse.is_set || is_set(dmac_inuse.operation)) leaf_name_data.push_back(dmac_inuse.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (flow_id.is_set || is_set(flow_id.operation)) leaf_name_data.push_back(flow_id.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.operation)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (inner_vlan.is_set || is_set(inner_vlan.operation)) leaf_name_data.push_back(inner_vlan.get_name_leafdata());
    if (inner_vlan_tpid.is_set || is_set(inner_vlan_tpid.operation)) leaf_name_data.push_back(inner_vlan_tpid.get_name_leafdata());
    if (inner_vlan_up.is_set || is_set(inner_vlan_up.operation)) leaf_name_data.push_back(inner_vlan_up.get_name_leafdata());
    if (is_ctrl_pkt.is_set || is_set(is_ctrl_pkt.operation)) leaf_name_data.push_back(is_ctrl_pkt.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.operation)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (match_bad_tag.is_set || is_set(match_bad_tag.operation)) leaf_name_data.push_back(match_bad_tag.get_name_leafdata());
    if (match_kay_tag.is_set || is_set(match_kay_tag.operation)) leaf_name_data.push_back(match_kay_tag.get_name_leafdata());
    if (match_pri.is_set || is_set(match_pri.operation)) leaf_name_data.push_back(match_pri.get_name_leafdata());
    if (match_tagged.is_set || is_set(match_tagged.operation)) leaf_name_data.push_back(match_tagged.get_name_leafdata());
    if (match_untagged.is_set || is_set(match_untagged.operation)) leaf_name_data.push_back(match_untagged.get_name_leafdata());
    if (outer_vlan.is_set || is_set(outer_vlan.operation)) leaf_name_data.push_back(outer_vlan.get_name_leafdata());
    if (outer_vlan_tpid.is_set || is_set(outer_vlan_tpid.operation)) leaf_name_data.push_back(outer_vlan_tpid.get_name_leafdata());
    if (outer_vlan_up.is_set || is_set(outer_vlan_up.operation)) leaf_name_data.push_back(outer_vlan_up.get_name_leafdata());
    if (sai.is_set || is_set(sai.operation)) leaf_name_data.push_back(sai.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (sci_inuse.is_set || is_set(sci_inuse.operation)) leaf_name_data.push_back(sci_inuse.get_name_leafdata());
    if (smac_inuse.is_set || is_set(smac_inuse.operation)) leaf_name_data.push_back(smac_inuse.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (source_port_chk.is_set || is_set(source_port_chk.operation)) leaf_name_data.push_back(source_port_chk.get_name_leafdata());
    if (tci.is_set || is_set(tci.operation)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_an.is_set || is_set(tci_an.operation)) leaf_name_data.push_back(tci_an.get_name_leafdata());
    if (tci_an_chk.is_set || is_set(tci_an_chk.operation)) leaf_name_data.push_back(tci_an_chk.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.operation)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.operation)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.operation)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.operation)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.operation)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.operation)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());
    auto macsa_name_datas = macsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macsa_name_datas.begin(), macsa_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "ctrl-check")
    {
        ctrl_check = value;
    }
    if(value_path == "dmac-inuse")
    {
        dmac_inuse = value;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "flow-id")
    {
        flow_id = value;
    }
    if(value_path == "in-use")
    {
        in_use = value;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan = value;
    }
    if(value_path == "inner-vlan-tpid")
    {
        inner_vlan_tpid = value;
    }
    if(value_path == "inner-vlan-up")
    {
        inner_vlan_up = value;
    }
    if(value_path == "is-ctrl-pkt")
    {
        is_ctrl_pkt = value;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
    if(value_path == "macsa")
    {
        macsa.append(value);
    }
    if(value_path == "match-bad-tag")
    {
        match_bad_tag = value;
    }
    if(value_path == "match-kay-tag")
    {
        match_kay_tag = value;
    }
    if(value_path == "match-pri")
    {
        match_pri = value;
    }
    if(value_path == "match-tagged")
    {
        match_tagged = value;
    }
    if(value_path == "match-untagged")
    {
        match_untagged = value;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan = value;
    }
    if(value_path == "outer-vlan-tpid")
    {
        outer_vlan_tpid = value;
    }
    if(value_path == "outer-vlan-up")
    {
        outer_vlan_up = value;
    }
    if(value_path == "sai")
    {
        sai = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "sci-inuse")
    {
        sci_inuse = value;
    }
    if(value_path == "smac-inuse")
    {
        smac_inuse = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "source-port-chk")
    {
        source_port_chk = value;
    }
    if(value_path == "tci")
    {
        tci = value;
    }
    if(value_path == "tci-an")
    {
        tci_an = value;
    }
    if(value_path == "tci-an-chk")
    {
        tci_an_chk = value;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow::RxFlow()
    :
    	action{YType::uint8, "action"},
	 ctrl_check{YType::boolean, "ctrl-check"},
	 dmac_inuse{YType::boolean, "dmac-inuse"},
	 ethertype{YType::uint16, "ethertype"},
	 flow_id{YType::uint8, "flow-id"},
	 in_use{YType::boolean, "in-use"},
	 inner_vlan{YType::uint16, "inner-vlan"},
	 inner_vlan_tpid{YType::uint16, "inner-vlan-tpid"},
	 inner_vlan_up{YType::uint8, "inner-vlan-up"},
	 is_ctrl_pkt{YType::boolean, "is-ctrl-pkt"},
	 is_egress{YType::boolean, "is-egress"},
	 macda{YType::uint8, "macda"},
	 macsa{YType::uint8, "macsa"},
	 match_bad_tag{YType::boolean, "match-bad-tag"},
	 match_kay_tag{YType::boolean, "match-kay-tag"},
	 match_pri{YType::uint8, "match-pri"},
	 match_tagged{YType::boolean, "match-tagged"},
	 match_untagged{YType::boolean, "match-untagged"},
	 outer_vlan{YType::uint16, "outer-vlan"},
	 outer_vlan_tpid{YType::uint16, "outer-vlan-tpid"},
	 outer_vlan_up{YType::uint8, "outer-vlan-up"},
	 sai{YType::uint32, "sai"},
	 sci{YType::uint64, "sci"},
	 sci_inuse{YType::boolean, "sci-inuse"},
	 smac_inuse{YType::boolean, "smac-inuse"},
	 source_port{YType::uint32, "source-port"},
	 source_port_chk{YType::boolean, "source-port-chk"},
	 tci{YType::uint8, "tci"},
	 tci_an{YType::uint8, "tci-an"},
	 tci_an_chk{YType::boolean, "tci-an-chk"},
	 tci_c{YType::uint8, "tci-c"},
	 tci_chk{YType::boolean, "tci-chk"},
	 tci_e_xr{YType::uint8, "tci-e-xr"},
	 tci_sc{YType::uint8, "tci-sc"},
	 tci_scb{YType::uint8, "tci-scb"},
	 tci_v{YType::uint8, "tci-v"},
	 valid{YType::boolean, "valid"}
{
    yang_name = "rx-flow"; yang_parent_name = "msfpga-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow::~RxFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow::has_data() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action.is_set
	|| ctrl_check.is_set
	|| dmac_inuse.is_set
	|| ethertype.is_set
	|| flow_id.is_set
	|| in_use.is_set
	|| inner_vlan.is_set
	|| inner_vlan_tpid.is_set
	|| inner_vlan_up.is_set
	|| is_ctrl_pkt.is_set
	|| is_egress.is_set
	|| match_bad_tag.is_set
	|| match_kay_tag.is_set
	|| match_pri.is_set
	|| match_tagged.is_set
	|| match_untagged.is_set
	|| outer_vlan.is_set
	|| outer_vlan_tpid.is_set
	|| outer_vlan_up.is_set
	|| sai.is_set
	|| sci.is_set
	|| sci_inuse.is_set
	|| smac_inuse.is_set
	|| source_port.is_set
	|| source_port_chk.is_set
	|| tci.is_set
	|| tci_an.is_set
	|| tci_an_chk.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci_v.is_set
	|| valid.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(ctrl_check.operation)
	|| is_set(dmac_inuse.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_id.operation)
	|| is_set(in_use.operation)
	|| is_set(inner_vlan.operation)
	|| is_set(inner_vlan_tpid.operation)
	|| is_set(inner_vlan_up.operation)
	|| is_set(is_ctrl_pkt.operation)
	|| is_set(is_egress.operation)
	|| is_set(macda.operation)
	|| is_set(macsa.operation)
	|| is_set(match_bad_tag.operation)
	|| is_set(match_kay_tag.operation)
	|| is_set(match_pri.operation)
	|| is_set(match_tagged.operation)
	|| is_set(match_untagged.operation)
	|| is_set(outer_vlan.operation)
	|| is_set(outer_vlan_tpid.operation)
	|| is_set(outer_vlan_up.operation)
	|| is_set(sai.operation)
	|| is_set(sci.operation)
	|| is_set(sci_inuse.operation)
	|| is_set(smac_inuse.operation)
	|| is_set(source_port.operation)
	|| is_set(source_port_chk.operation)
	|| is_set(tci.operation)
	|| is_set(tci_an.operation)
	|| is_set(tci_an_chk.operation)
	|| is_set(tci_c.operation)
	|| is_set(tci_chk.operation)
	|| is_set(tci_e_xr.operation)
	|| is_set(tci_sc.operation)
	|| is_set(tci_scb.operation)
	|| is_set(tci_v.operation)
	|| is_set(valid.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (ctrl_check.is_set || is_set(ctrl_check.operation)) leaf_name_data.push_back(ctrl_check.get_name_leafdata());
    if (dmac_inuse.is_set || is_set(dmac_inuse.operation)) leaf_name_data.push_back(dmac_inuse.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (flow_id.is_set || is_set(flow_id.operation)) leaf_name_data.push_back(flow_id.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.operation)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (inner_vlan.is_set || is_set(inner_vlan.operation)) leaf_name_data.push_back(inner_vlan.get_name_leafdata());
    if (inner_vlan_tpid.is_set || is_set(inner_vlan_tpid.operation)) leaf_name_data.push_back(inner_vlan_tpid.get_name_leafdata());
    if (inner_vlan_up.is_set || is_set(inner_vlan_up.operation)) leaf_name_data.push_back(inner_vlan_up.get_name_leafdata());
    if (is_ctrl_pkt.is_set || is_set(is_ctrl_pkt.operation)) leaf_name_data.push_back(is_ctrl_pkt.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.operation)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (match_bad_tag.is_set || is_set(match_bad_tag.operation)) leaf_name_data.push_back(match_bad_tag.get_name_leafdata());
    if (match_kay_tag.is_set || is_set(match_kay_tag.operation)) leaf_name_data.push_back(match_kay_tag.get_name_leafdata());
    if (match_pri.is_set || is_set(match_pri.operation)) leaf_name_data.push_back(match_pri.get_name_leafdata());
    if (match_tagged.is_set || is_set(match_tagged.operation)) leaf_name_data.push_back(match_tagged.get_name_leafdata());
    if (match_untagged.is_set || is_set(match_untagged.operation)) leaf_name_data.push_back(match_untagged.get_name_leafdata());
    if (outer_vlan.is_set || is_set(outer_vlan.operation)) leaf_name_data.push_back(outer_vlan.get_name_leafdata());
    if (outer_vlan_tpid.is_set || is_set(outer_vlan_tpid.operation)) leaf_name_data.push_back(outer_vlan_tpid.get_name_leafdata());
    if (outer_vlan_up.is_set || is_set(outer_vlan_up.operation)) leaf_name_data.push_back(outer_vlan_up.get_name_leafdata());
    if (sai.is_set || is_set(sai.operation)) leaf_name_data.push_back(sai.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (sci_inuse.is_set || is_set(sci_inuse.operation)) leaf_name_data.push_back(sci_inuse.get_name_leafdata());
    if (smac_inuse.is_set || is_set(smac_inuse.operation)) leaf_name_data.push_back(smac_inuse.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (source_port_chk.is_set || is_set(source_port_chk.operation)) leaf_name_data.push_back(source_port_chk.get_name_leafdata());
    if (tci.is_set || is_set(tci.operation)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_an.is_set || is_set(tci_an.operation)) leaf_name_data.push_back(tci_an.get_name_leafdata());
    if (tci_an_chk.is_set || is_set(tci_an_chk.operation)) leaf_name_data.push_back(tci_an_chk.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.operation)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.operation)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.operation)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.operation)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.operation)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.operation)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());
    auto macsa_name_datas = macsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macsa_name_datas.begin(), macsa_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "ctrl-check")
    {
        ctrl_check = value;
    }
    if(value_path == "dmac-inuse")
    {
        dmac_inuse = value;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "flow-id")
    {
        flow_id = value;
    }
    if(value_path == "in-use")
    {
        in_use = value;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan = value;
    }
    if(value_path == "inner-vlan-tpid")
    {
        inner_vlan_tpid = value;
    }
    if(value_path == "inner-vlan-up")
    {
        inner_vlan_up = value;
    }
    if(value_path == "is-ctrl-pkt")
    {
        is_ctrl_pkt = value;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
    if(value_path == "macsa")
    {
        macsa.append(value);
    }
    if(value_path == "match-bad-tag")
    {
        match_bad_tag = value;
    }
    if(value_path == "match-kay-tag")
    {
        match_kay_tag = value;
    }
    if(value_path == "match-pri")
    {
        match_pri = value;
    }
    if(value_path == "match-tagged")
    {
        match_tagged = value;
    }
    if(value_path == "match-untagged")
    {
        match_untagged = value;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan = value;
    }
    if(value_path == "outer-vlan-tpid")
    {
        outer_vlan_tpid = value;
    }
    if(value_path == "outer-vlan-up")
    {
        outer_vlan_up = value;
    }
    if(value_path == "sai")
    {
        sai = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "sci-inuse")
    {
        sci_inuse = value;
    }
    if(value_path == "smac-inuse")
    {
        smac_inuse = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "source-port-chk")
    {
        source_port_chk = value;
    }
    if(value_path == "tci")
    {
        tci = value;
    }
    if(value_path == "tci-an")
    {
        tci_an = value;
    }
    if(value_path == "tci-an-chk")
    {
        tci_an_chk = value;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::MsfpgaFlow()
    :
    rx_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow>())
	,tx_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow>())
{
    rx_flow->parent = this;
    children["rx-flow"] = rx_flow.get();

    tx_flow->parent = this;
    children["tx-flow"] = tx_flow.get();

    yang_name = "msfpga-flow"; yang_parent_name = "hw-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::~MsfpgaFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::has_data() const
{
    return (rx_flow !=  nullptr && rx_flow->has_data())
	|| (tx_flow !=  nullptr && tx_flow->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::has_operation() const
{
    return is_set(operation)
	|| (rx_flow !=  nullptr && rx_flow->has_operation())
	|| (tx_flow !=  nullptr && tx_flow->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-flow")
    {
        if(rx_flow != nullptr)
        {
            children["rx-flow"] = rx_flow.get();
        }
        else
        {
            rx_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow>();
            rx_flow->parent = this;
            children["rx-flow"] = rx_flow.get();
        }
        return children.at("rx-flow");
    }

    if(child_yang_name == "tx-flow")
    {
        if(tx_flow != nullptr)
        {
            children["tx-flow"] = tx_flow.get();
        }
        else
        {
            tx_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow>();
            tx_flow->parent = this;
            children["tx-flow"] = tx_flow.get();
        }
        return children.at("tx-flow");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::get_children()
{
    if(children.find("rx-flow") == children.end())
    {
        if(rx_flow != nullptr)
        {
            children["rx-flow"] = rx_flow.get();
        }
    }

    if(children.find("tx-flow") == children.end())
    {
        if(tx_flow != nullptr)
        {
            children["tx-flow"] = tx_flow.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow::TxFlow()
    :
    	drop{YType::boolean, "drop"},
	 ethertype{YType::uint16, "ethertype"},
	 flow_miss{YType::uint64, "flow-miss"},
	 flow_no{YType::uint32, "flow-no"},
	 force_ctrl{YType::boolean, "force-ctrl"},
	 inner_vlan_dei{YType::boolean, "inner-vlan-dei"},
	 inner_vlan_id{YType::uint16, "inner-vlan-id"},
	 inner_vlan_user_pri{YType::uint8, "inner-vlan-user-pri"},
	 is_flow_enabled{YType::boolean, "is-flow-enabled"},
	 macda{YType::uint8, "macda"},
	 mask_da{YType::uint64, "mask-da"},
	 mask_ethertype{YType::uint32, "mask-ethertype"},
	 mask_plain_bits{YType::uint64, "mask-plain-bits"},
	 match_priority{YType::uint8, "match-priority"},
	 mpls1_bos{YType::uint8, "mpls1-bos"},
	 mpls1_exp{YType::uint8, "mpls1-exp"},
	 mpls1_label{YType::uint32, "mpls1-label"},
	 mpls2_bos{YType::uint8, "mpls2-bos"},
	 mpls2_exp{YType::uint8, "mpls2-exp"},
	 mpls2_label{YType::uint32, "mpls2-label"},
	 multi_flow_match{YType::uint64, "multi-flow-match"},
	 outer_vlan_dei{YType::boolean, "outer-vlan-dei"},
	 outer_vlan_id{YType::uint16, "outer-vlan-id"},
	 outer_vlan_user_pri{YType::uint8, "outer-vlan-user-pri"},
	 parser_dropped{YType::uint64, "parser-dropped"},
	 pbb_bvid{YType::uint32, "pbb-bvid"},
	 pbb_dei{YType::uint8, "pbb-dei"},
	 pbb_pcp{YType::uint8, "pbb-pcp"},
	 pbb_sid{YType::uint32, "pbb-sid"},
	 pkt_type{YType::uint32, "pkt-type"},
	 pkts_ctrl{YType::uint64, "pkts-ctrl"},
	 pkts_data{YType::uint64, "pkts-data"},
	 pkts_dropped{YType::uint64, "pkts-dropped"},
	 pkts_err_in{YType::uint64, "pkts-err-in"},
	 plain_bits{YType::uint64, "plain-bits"},
	 plain_bits_size{YType::uint8, "plain-bits-size"},
	 psci{YType::uint64, "psci"},
	 tag_num{YType::uint32, "tag-num"},
	 tci{YType::uint8, "tci"},
	 tci_c{YType::uint8, "tci-c"},
	 tci_chk{YType::boolean, "tci-chk"},
	 tci_e_xr{YType::uint8, "tci-e-xr"},
	 tci_sc{YType::uint8, "tci-sc"},
	 tci_scb{YType::uint8, "tci-scb"},
	 tci_v{YType::uint8, "tci-v"},
	 vlan_dei{YType::uint8, "vlan-dei"},
	 vlan_id{YType::uint16, "vlan-id"},
	 vlan_pcp{YType::uint8, "vlan-pcp"}
{
    yang_name = "tx-flow"; yang_parent_name = "es200-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow::~TxFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow::has_data() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return drop.is_set
	|| ethertype.is_set
	|| flow_miss.is_set
	|| flow_no.is_set
	|| force_ctrl.is_set
	|| inner_vlan_dei.is_set
	|| inner_vlan_id.is_set
	|| inner_vlan_user_pri.is_set
	|| is_flow_enabled.is_set
	|| mask_da.is_set
	|| mask_ethertype.is_set
	|| mask_plain_bits.is_set
	|| match_priority.is_set
	|| mpls1_bos.is_set
	|| mpls1_exp.is_set
	|| mpls1_label.is_set
	|| mpls2_bos.is_set
	|| mpls2_exp.is_set
	|| mpls2_label.is_set
	|| multi_flow_match.is_set
	|| outer_vlan_dei.is_set
	|| outer_vlan_id.is_set
	|| outer_vlan_user_pri.is_set
	|| parser_dropped.is_set
	|| pbb_bvid.is_set
	|| pbb_dei.is_set
	|| pbb_pcp.is_set
	|| pbb_sid.is_set
	|| pkt_type.is_set
	|| pkts_ctrl.is_set
	|| pkts_data.is_set
	|| pkts_dropped.is_set
	|| pkts_err_in.is_set
	|| plain_bits.is_set
	|| plain_bits_size.is_set
	|| psci.is_set
	|| tag_num.is_set
	|| tci.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci_v.is_set
	|| vlan_dei.is_set
	|| vlan_id.is_set
	|| vlan_pcp.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_miss.operation)
	|| is_set(flow_no.operation)
	|| is_set(force_ctrl.operation)
	|| is_set(inner_vlan_dei.operation)
	|| is_set(inner_vlan_id.operation)
	|| is_set(inner_vlan_user_pri.operation)
	|| is_set(is_flow_enabled.operation)
	|| is_set(macda.operation)
	|| is_set(mask_da.operation)
	|| is_set(mask_ethertype.operation)
	|| is_set(mask_plain_bits.operation)
	|| is_set(match_priority.operation)
	|| is_set(mpls1_bos.operation)
	|| is_set(mpls1_exp.operation)
	|| is_set(mpls1_label.operation)
	|| is_set(mpls2_bos.operation)
	|| is_set(mpls2_exp.operation)
	|| is_set(mpls2_label.operation)
	|| is_set(multi_flow_match.operation)
	|| is_set(outer_vlan_dei.operation)
	|| is_set(outer_vlan_id.operation)
	|| is_set(outer_vlan_user_pri.operation)
	|| is_set(parser_dropped.operation)
	|| is_set(pbb_bvid.operation)
	|| is_set(pbb_dei.operation)
	|| is_set(pbb_pcp.operation)
	|| is_set(pbb_sid.operation)
	|| is_set(pkt_type.operation)
	|| is_set(pkts_ctrl.operation)
	|| is_set(pkts_data.operation)
	|| is_set(pkts_dropped.operation)
	|| is_set(pkts_err_in.operation)
	|| is_set(plain_bits.operation)
	|| is_set(plain_bits_size.operation)
	|| is_set(psci.operation)
	|| is_set(tag_num.operation)
	|| is_set(tci.operation)
	|| is_set(tci_c.operation)
	|| is_set(tci_chk.operation)
	|| is_set(tci_e_xr.operation)
	|| is_set(tci_sc.operation)
	|| is_set(tci_scb.operation)
	|| is_set(tci_v.operation)
	|| is_set(vlan_dei.operation)
	|| is_set(vlan_id.operation)
	|| is_set(vlan_pcp.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (flow_miss.is_set || is_set(flow_miss.operation)) leaf_name_data.push_back(flow_miss.get_name_leafdata());
    if (flow_no.is_set || is_set(flow_no.operation)) leaf_name_data.push_back(flow_no.get_name_leafdata());
    if (force_ctrl.is_set || is_set(force_ctrl.operation)) leaf_name_data.push_back(force_ctrl.get_name_leafdata());
    if (inner_vlan_dei.is_set || is_set(inner_vlan_dei.operation)) leaf_name_data.push_back(inner_vlan_dei.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.operation)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (inner_vlan_user_pri.is_set || is_set(inner_vlan_user_pri.operation)) leaf_name_data.push_back(inner_vlan_user_pri.get_name_leafdata());
    if (is_flow_enabled.is_set || is_set(is_flow_enabled.operation)) leaf_name_data.push_back(is_flow_enabled.get_name_leafdata());
    if (mask_da.is_set || is_set(mask_da.operation)) leaf_name_data.push_back(mask_da.get_name_leafdata());
    if (mask_ethertype.is_set || is_set(mask_ethertype.operation)) leaf_name_data.push_back(mask_ethertype.get_name_leafdata());
    if (mask_plain_bits.is_set || is_set(mask_plain_bits.operation)) leaf_name_data.push_back(mask_plain_bits.get_name_leafdata());
    if (match_priority.is_set || is_set(match_priority.operation)) leaf_name_data.push_back(match_priority.get_name_leafdata());
    if (mpls1_bos.is_set || is_set(mpls1_bos.operation)) leaf_name_data.push_back(mpls1_bos.get_name_leafdata());
    if (mpls1_exp.is_set || is_set(mpls1_exp.operation)) leaf_name_data.push_back(mpls1_exp.get_name_leafdata());
    if (mpls1_label.is_set || is_set(mpls1_label.operation)) leaf_name_data.push_back(mpls1_label.get_name_leafdata());
    if (mpls2_bos.is_set || is_set(mpls2_bos.operation)) leaf_name_data.push_back(mpls2_bos.get_name_leafdata());
    if (mpls2_exp.is_set || is_set(mpls2_exp.operation)) leaf_name_data.push_back(mpls2_exp.get_name_leafdata());
    if (mpls2_label.is_set || is_set(mpls2_label.operation)) leaf_name_data.push_back(mpls2_label.get_name_leafdata());
    if (multi_flow_match.is_set || is_set(multi_flow_match.operation)) leaf_name_data.push_back(multi_flow_match.get_name_leafdata());
    if (outer_vlan_dei.is_set || is_set(outer_vlan_dei.operation)) leaf_name_data.push_back(outer_vlan_dei.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.operation)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (outer_vlan_user_pri.is_set || is_set(outer_vlan_user_pri.operation)) leaf_name_data.push_back(outer_vlan_user_pri.get_name_leafdata());
    if (parser_dropped.is_set || is_set(parser_dropped.operation)) leaf_name_data.push_back(parser_dropped.get_name_leafdata());
    if (pbb_bvid.is_set || is_set(pbb_bvid.operation)) leaf_name_data.push_back(pbb_bvid.get_name_leafdata());
    if (pbb_dei.is_set || is_set(pbb_dei.operation)) leaf_name_data.push_back(pbb_dei.get_name_leafdata());
    if (pbb_pcp.is_set || is_set(pbb_pcp.operation)) leaf_name_data.push_back(pbb_pcp.get_name_leafdata());
    if (pbb_sid.is_set || is_set(pbb_sid.operation)) leaf_name_data.push_back(pbb_sid.get_name_leafdata());
    if (pkt_type.is_set || is_set(pkt_type.operation)) leaf_name_data.push_back(pkt_type.get_name_leafdata());
    if (pkts_ctrl.is_set || is_set(pkts_ctrl.operation)) leaf_name_data.push_back(pkts_ctrl.get_name_leafdata());
    if (pkts_data.is_set || is_set(pkts_data.operation)) leaf_name_data.push_back(pkts_data.get_name_leafdata());
    if (pkts_dropped.is_set || is_set(pkts_dropped.operation)) leaf_name_data.push_back(pkts_dropped.get_name_leafdata());
    if (pkts_err_in.is_set || is_set(pkts_err_in.operation)) leaf_name_data.push_back(pkts_err_in.get_name_leafdata());
    if (plain_bits.is_set || is_set(plain_bits.operation)) leaf_name_data.push_back(plain_bits.get_name_leafdata());
    if (plain_bits_size.is_set || is_set(plain_bits_size.operation)) leaf_name_data.push_back(plain_bits_size.get_name_leafdata());
    if (psci.is_set || is_set(psci.operation)) leaf_name_data.push_back(psci.get_name_leafdata());
    if (tag_num.is_set || is_set(tag_num.operation)) leaf_name_data.push_back(tag_num.get_name_leafdata());
    if (tci.is_set || is_set(tci.operation)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.operation)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.operation)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.operation)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.operation)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.operation)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.operation)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (vlan_dei.is_set || is_set(vlan_dei.operation)) leaf_name_data.push_back(vlan_dei.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (vlan_pcp.is_set || is_set(vlan_pcp.operation)) leaf_name_data.push_back(vlan_pcp.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "flow-miss")
    {
        flow_miss = value;
    }
    if(value_path == "flow-no")
    {
        flow_no = value;
    }
    if(value_path == "force-ctrl")
    {
        force_ctrl = value;
    }
    if(value_path == "inner-vlan-dei")
    {
        inner_vlan_dei = value;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
    }
    if(value_path == "inner-vlan-user-pri")
    {
        inner_vlan_user_pri = value;
    }
    if(value_path == "is-flow-enabled")
    {
        is_flow_enabled = value;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
    if(value_path == "mask-da")
    {
        mask_da = value;
    }
    if(value_path == "mask-ethertype")
    {
        mask_ethertype = value;
    }
    if(value_path == "mask-plain-bits")
    {
        mask_plain_bits = value;
    }
    if(value_path == "match-priority")
    {
        match_priority = value;
    }
    if(value_path == "mpls1-bos")
    {
        mpls1_bos = value;
    }
    if(value_path == "mpls1-exp")
    {
        mpls1_exp = value;
    }
    if(value_path == "mpls1-label")
    {
        mpls1_label = value;
    }
    if(value_path == "mpls2-bos")
    {
        mpls2_bos = value;
    }
    if(value_path == "mpls2-exp")
    {
        mpls2_exp = value;
    }
    if(value_path == "mpls2-label")
    {
        mpls2_label = value;
    }
    if(value_path == "multi-flow-match")
    {
        multi_flow_match = value;
    }
    if(value_path == "outer-vlan-dei")
    {
        outer_vlan_dei = value;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
    }
    if(value_path == "outer-vlan-user-pri")
    {
        outer_vlan_user_pri = value;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped = value;
    }
    if(value_path == "pbb-bvid")
    {
        pbb_bvid = value;
    }
    if(value_path == "pbb-dei")
    {
        pbb_dei = value;
    }
    if(value_path == "pbb-pcp")
    {
        pbb_pcp = value;
    }
    if(value_path == "pbb-sid")
    {
        pbb_sid = value;
    }
    if(value_path == "pkt-type")
    {
        pkt_type = value;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl = value;
    }
    if(value_path == "pkts-data")
    {
        pkts_data = value;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped = value;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in = value;
    }
    if(value_path == "plain-bits")
    {
        plain_bits = value;
    }
    if(value_path == "plain-bits-size")
    {
        plain_bits_size = value;
    }
    if(value_path == "psci")
    {
        psci = value;
    }
    if(value_path == "tag-num")
    {
        tag_num = value;
    }
    if(value_path == "tci")
    {
        tci = value;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
    }
    if(value_path == "vlan-dei")
    {
        vlan_dei = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
    if(value_path == "vlan-pcp")
    {
        vlan_pcp = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow::RxFlow()
    :
    	drop{YType::boolean, "drop"},
	 ethertype{YType::uint16, "ethertype"},
	 flow_miss{YType::uint64, "flow-miss"},
	 flow_no{YType::uint32, "flow-no"},
	 force_ctrl{YType::boolean, "force-ctrl"},
	 inner_vlan_dei{YType::boolean, "inner-vlan-dei"},
	 inner_vlan_id{YType::uint16, "inner-vlan-id"},
	 inner_vlan_user_pri{YType::uint8, "inner-vlan-user-pri"},
	 is_flow_enabled{YType::boolean, "is-flow-enabled"},
	 macda{YType::uint8, "macda"},
	 mask_da{YType::uint64, "mask-da"},
	 mask_ethertype{YType::uint32, "mask-ethertype"},
	 mask_plain_bits{YType::uint64, "mask-plain-bits"},
	 match_priority{YType::uint8, "match-priority"},
	 mpls1_bos{YType::uint8, "mpls1-bos"},
	 mpls1_exp{YType::uint8, "mpls1-exp"},
	 mpls1_label{YType::uint32, "mpls1-label"},
	 mpls2_bos{YType::uint8, "mpls2-bos"},
	 mpls2_exp{YType::uint8, "mpls2-exp"},
	 mpls2_label{YType::uint32, "mpls2-label"},
	 multi_flow_match{YType::uint64, "multi-flow-match"},
	 outer_vlan_dei{YType::boolean, "outer-vlan-dei"},
	 outer_vlan_id{YType::uint16, "outer-vlan-id"},
	 outer_vlan_user_pri{YType::uint8, "outer-vlan-user-pri"},
	 parser_dropped{YType::uint64, "parser-dropped"},
	 pbb_bvid{YType::uint32, "pbb-bvid"},
	 pbb_dei{YType::uint8, "pbb-dei"},
	 pbb_pcp{YType::uint8, "pbb-pcp"},
	 pbb_sid{YType::uint32, "pbb-sid"},
	 pkt_type{YType::uint32, "pkt-type"},
	 pkts_ctrl{YType::uint64, "pkts-ctrl"},
	 pkts_data{YType::uint64, "pkts-data"},
	 pkts_dropped{YType::uint64, "pkts-dropped"},
	 pkts_err_in{YType::uint64, "pkts-err-in"},
	 plain_bits{YType::uint64, "plain-bits"},
	 plain_bits_size{YType::uint8, "plain-bits-size"},
	 psci{YType::uint64, "psci"},
	 tag_num{YType::uint32, "tag-num"},
	 tci{YType::uint8, "tci"},
	 tci_c{YType::uint8, "tci-c"},
	 tci_chk{YType::boolean, "tci-chk"},
	 tci_e_xr{YType::uint8, "tci-e-xr"},
	 tci_sc{YType::uint8, "tci-sc"},
	 tci_scb{YType::uint8, "tci-scb"},
	 tci_v{YType::uint8, "tci-v"},
	 vlan_dei{YType::uint8, "vlan-dei"},
	 vlan_id{YType::uint16, "vlan-id"},
	 vlan_pcp{YType::uint8, "vlan-pcp"}
{
    yang_name = "rx-flow"; yang_parent_name = "es200-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow::~RxFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow::has_data() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return drop.is_set
	|| ethertype.is_set
	|| flow_miss.is_set
	|| flow_no.is_set
	|| force_ctrl.is_set
	|| inner_vlan_dei.is_set
	|| inner_vlan_id.is_set
	|| inner_vlan_user_pri.is_set
	|| is_flow_enabled.is_set
	|| mask_da.is_set
	|| mask_ethertype.is_set
	|| mask_plain_bits.is_set
	|| match_priority.is_set
	|| mpls1_bos.is_set
	|| mpls1_exp.is_set
	|| mpls1_label.is_set
	|| mpls2_bos.is_set
	|| mpls2_exp.is_set
	|| mpls2_label.is_set
	|| multi_flow_match.is_set
	|| outer_vlan_dei.is_set
	|| outer_vlan_id.is_set
	|| outer_vlan_user_pri.is_set
	|| parser_dropped.is_set
	|| pbb_bvid.is_set
	|| pbb_dei.is_set
	|| pbb_pcp.is_set
	|| pbb_sid.is_set
	|| pkt_type.is_set
	|| pkts_ctrl.is_set
	|| pkts_data.is_set
	|| pkts_dropped.is_set
	|| pkts_err_in.is_set
	|| plain_bits.is_set
	|| plain_bits_size.is_set
	|| psci.is_set
	|| tag_num.is_set
	|| tci.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci_v.is_set
	|| vlan_dei.is_set
	|| vlan_id.is_set
	|| vlan_pcp.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_miss.operation)
	|| is_set(flow_no.operation)
	|| is_set(force_ctrl.operation)
	|| is_set(inner_vlan_dei.operation)
	|| is_set(inner_vlan_id.operation)
	|| is_set(inner_vlan_user_pri.operation)
	|| is_set(is_flow_enabled.operation)
	|| is_set(macda.operation)
	|| is_set(mask_da.operation)
	|| is_set(mask_ethertype.operation)
	|| is_set(mask_plain_bits.operation)
	|| is_set(match_priority.operation)
	|| is_set(mpls1_bos.operation)
	|| is_set(mpls1_exp.operation)
	|| is_set(mpls1_label.operation)
	|| is_set(mpls2_bos.operation)
	|| is_set(mpls2_exp.operation)
	|| is_set(mpls2_label.operation)
	|| is_set(multi_flow_match.operation)
	|| is_set(outer_vlan_dei.operation)
	|| is_set(outer_vlan_id.operation)
	|| is_set(outer_vlan_user_pri.operation)
	|| is_set(parser_dropped.operation)
	|| is_set(pbb_bvid.operation)
	|| is_set(pbb_dei.operation)
	|| is_set(pbb_pcp.operation)
	|| is_set(pbb_sid.operation)
	|| is_set(pkt_type.operation)
	|| is_set(pkts_ctrl.operation)
	|| is_set(pkts_data.operation)
	|| is_set(pkts_dropped.operation)
	|| is_set(pkts_err_in.operation)
	|| is_set(plain_bits.operation)
	|| is_set(plain_bits_size.operation)
	|| is_set(psci.operation)
	|| is_set(tag_num.operation)
	|| is_set(tci.operation)
	|| is_set(tci_c.operation)
	|| is_set(tci_chk.operation)
	|| is_set(tci_e_xr.operation)
	|| is_set(tci_sc.operation)
	|| is_set(tci_scb.operation)
	|| is_set(tci_v.operation)
	|| is_set(vlan_dei.operation)
	|| is_set(vlan_id.operation)
	|| is_set(vlan_pcp.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (flow_miss.is_set || is_set(flow_miss.operation)) leaf_name_data.push_back(flow_miss.get_name_leafdata());
    if (flow_no.is_set || is_set(flow_no.operation)) leaf_name_data.push_back(flow_no.get_name_leafdata());
    if (force_ctrl.is_set || is_set(force_ctrl.operation)) leaf_name_data.push_back(force_ctrl.get_name_leafdata());
    if (inner_vlan_dei.is_set || is_set(inner_vlan_dei.operation)) leaf_name_data.push_back(inner_vlan_dei.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.operation)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (inner_vlan_user_pri.is_set || is_set(inner_vlan_user_pri.operation)) leaf_name_data.push_back(inner_vlan_user_pri.get_name_leafdata());
    if (is_flow_enabled.is_set || is_set(is_flow_enabled.operation)) leaf_name_data.push_back(is_flow_enabled.get_name_leafdata());
    if (mask_da.is_set || is_set(mask_da.operation)) leaf_name_data.push_back(mask_da.get_name_leafdata());
    if (mask_ethertype.is_set || is_set(mask_ethertype.operation)) leaf_name_data.push_back(mask_ethertype.get_name_leafdata());
    if (mask_plain_bits.is_set || is_set(mask_plain_bits.operation)) leaf_name_data.push_back(mask_plain_bits.get_name_leafdata());
    if (match_priority.is_set || is_set(match_priority.operation)) leaf_name_data.push_back(match_priority.get_name_leafdata());
    if (mpls1_bos.is_set || is_set(mpls1_bos.operation)) leaf_name_data.push_back(mpls1_bos.get_name_leafdata());
    if (mpls1_exp.is_set || is_set(mpls1_exp.operation)) leaf_name_data.push_back(mpls1_exp.get_name_leafdata());
    if (mpls1_label.is_set || is_set(mpls1_label.operation)) leaf_name_data.push_back(mpls1_label.get_name_leafdata());
    if (mpls2_bos.is_set || is_set(mpls2_bos.operation)) leaf_name_data.push_back(mpls2_bos.get_name_leafdata());
    if (mpls2_exp.is_set || is_set(mpls2_exp.operation)) leaf_name_data.push_back(mpls2_exp.get_name_leafdata());
    if (mpls2_label.is_set || is_set(mpls2_label.operation)) leaf_name_data.push_back(mpls2_label.get_name_leafdata());
    if (multi_flow_match.is_set || is_set(multi_flow_match.operation)) leaf_name_data.push_back(multi_flow_match.get_name_leafdata());
    if (outer_vlan_dei.is_set || is_set(outer_vlan_dei.operation)) leaf_name_data.push_back(outer_vlan_dei.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.operation)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (outer_vlan_user_pri.is_set || is_set(outer_vlan_user_pri.operation)) leaf_name_data.push_back(outer_vlan_user_pri.get_name_leafdata());
    if (parser_dropped.is_set || is_set(parser_dropped.operation)) leaf_name_data.push_back(parser_dropped.get_name_leafdata());
    if (pbb_bvid.is_set || is_set(pbb_bvid.operation)) leaf_name_data.push_back(pbb_bvid.get_name_leafdata());
    if (pbb_dei.is_set || is_set(pbb_dei.operation)) leaf_name_data.push_back(pbb_dei.get_name_leafdata());
    if (pbb_pcp.is_set || is_set(pbb_pcp.operation)) leaf_name_data.push_back(pbb_pcp.get_name_leafdata());
    if (pbb_sid.is_set || is_set(pbb_sid.operation)) leaf_name_data.push_back(pbb_sid.get_name_leafdata());
    if (pkt_type.is_set || is_set(pkt_type.operation)) leaf_name_data.push_back(pkt_type.get_name_leafdata());
    if (pkts_ctrl.is_set || is_set(pkts_ctrl.operation)) leaf_name_data.push_back(pkts_ctrl.get_name_leafdata());
    if (pkts_data.is_set || is_set(pkts_data.operation)) leaf_name_data.push_back(pkts_data.get_name_leafdata());
    if (pkts_dropped.is_set || is_set(pkts_dropped.operation)) leaf_name_data.push_back(pkts_dropped.get_name_leafdata());
    if (pkts_err_in.is_set || is_set(pkts_err_in.operation)) leaf_name_data.push_back(pkts_err_in.get_name_leafdata());
    if (plain_bits.is_set || is_set(plain_bits.operation)) leaf_name_data.push_back(plain_bits.get_name_leafdata());
    if (plain_bits_size.is_set || is_set(plain_bits_size.operation)) leaf_name_data.push_back(plain_bits_size.get_name_leafdata());
    if (psci.is_set || is_set(psci.operation)) leaf_name_data.push_back(psci.get_name_leafdata());
    if (tag_num.is_set || is_set(tag_num.operation)) leaf_name_data.push_back(tag_num.get_name_leafdata());
    if (tci.is_set || is_set(tci.operation)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.operation)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.operation)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.operation)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.operation)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.operation)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.operation)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (vlan_dei.is_set || is_set(vlan_dei.operation)) leaf_name_data.push_back(vlan_dei.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (vlan_pcp.is_set || is_set(vlan_pcp.operation)) leaf_name_data.push_back(vlan_pcp.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "flow-miss")
    {
        flow_miss = value;
    }
    if(value_path == "flow-no")
    {
        flow_no = value;
    }
    if(value_path == "force-ctrl")
    {
        force_ctrl = value;
    }
    if(value_path == "inner-vlan-dei")
    {
        inner_vlan_dei = value;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
    }
    if(value_path == "inner-vlan-user-pri")
    {
        inner_vlan_user_pri = value;
    }
    if(value_path == "is-flow-enabled")
    {
        is_flow_enabled = value;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
    if(value_path == "mask-da")
    {
        mask_da = value;
    }
    if(value_path == "mask-ethertype")
    {
        mask_ethertype = value;
    }
    if(value_path == "mask-plain-bits")
    {
        mask_plain_bits = value;
    }
    if(value_path == "match-priority")
    {
        match_priority = value;
    }
    if(value_path == "mpls1-bos")
    {
        mpls1_bos = value;
    }
    if(value_path == "mpls1-exp")
    {
        mpls1_exp = value;
    }
    if(value_path == "mpls1-label")
    {
        mpls1_label = value;
    }
    if(value_path == "mpls2-bos")
    {
        mpls2_bos = value;
    }
    if(value_path == "mpls2-exp")
    {
        mpls2_exp = value;
    }
    if(value_path == "mpls2-label")
    {
        mpls2_label = value;
    }
    if(value_path == "multi-flow-match")
    {
        multi_flow_match = value;
    }
    if(value_path == "outer-vlan-dei")
    {
        outer_vlan_dei = value;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
    }
    if(value_path == "outer-vlan-user-pri")
    {
        outer_vlan_user_pri = value;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped = value;
    }
    if(value_path == "pbb-bvid")
    {
        pbb_bvid = value;
    }
    if(value_path == "pbb-dei")
    {
        pbb_dei = value;
    }
    if(value_path == "pbb-pcp")
    {
        pbb_pcp = value;
    }
    if(value_path == "pbb-sid")
    {
        pbb_sid = value;
    }
    if(value_path == "pkt-type")
    {
        pkt_type = value;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl = value;
    }
    if(value_path == "pkts-data")
    {
        pkts_data = value;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped = value;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in = value;
    }
    if(value_path == "plain-bits")
    {
        plain_bits = value;
    }
    if(value_path == "plain-bits-size")
    {
        plain_bits_size = value;
    }
    if(value_path == "psci")
    {
        psci = value;
    }
    if(value_path == "tag-num")
    {
        tag_num = value;
    }
    if(value_path == "tci")
    {
        tci = value;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
    }
    if(value_path == "vlan-dei")
    {
        vlan_dei = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
    if(value_path == "vlan-pcp")
    {
        vlan_pcp = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::Es200Flow()
    :
    rx_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow>())
	,tx_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow>())
{
    rx_flow->parent = this;
    children["rx-flow"] = rx_flow.get();

    tx_flow->parent = this;
    children["tx-flow"] = tx_flow.get();

    yang_name = "es200-flow"; yang_parent_name = "hw-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::~Es200Flow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::has_data() const
{
    return (rx_flow !=  nullptr && rx_flow->has_data())
	|| (tx_flow !=  nullptr && tx_flow->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::has_operation() const
{
    return is_set(operation)
	|| (rx_flow !=  nullptr && rx_flow->has_operation())
	|| (tx_flow !=  nullptr && tx_flow->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-flow")
    {
        if(rx_flow != nullptr)
        {
            children["rx-flow"] = rx_flow.get();
        }
        else
        {
            rx_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow>();
            rx_flow->parent = this;
            children["rx-flow"] = rx_flow.get();
        }
        return children.at("rx-flow");
    }

    if(child_yang_name == "tx-flow")
    {
        if(tx_flow != nullptr)
        {
            children["tx-flow"] = tx_flow.get();
        }
        else
        {
            tx_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow>();
            tx_flow->parent = this;
            children["tx-flow"] = tx_flow.get();
        }
        return children.at("tx-flow");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::get_children()
{
    if(children.find("rx-flow") == children.end())
    {
        if(rx_flow != nullptr)
        {
            children["rx-flow"] = rx_flow.get();
        }
    }

    if(children.find("tx-flow") == children.end())
    {
        if(tx_flow != nullptr)
        {
            children["tx-flow"] = tx_flow.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::HwFlow()
    :
    	flow_id{YType::int32, "flow-id"},
	 hw_type{YType::uint8, "hw-type"}
    	,
    es200_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow>())
	,msfpga_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow>())
{
    es200_flow->parent = this;
    children["es200-flow"] = es200_flow.get();

    msfpga_flow->parent = this;
    children["msfpga-flow"] = msfpga_flow.get();

    yang_name = "hw-flow"; yang_parent_name = "hw-flow-s";
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::~HwFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::has_data() const
{
    return flow_id.is_set
	|| hw_type.is_set
	|| (es200_flow !=  nullptr && es200_flow->has_data())
	|| (msfpga_flow !=  nullptr && msfpga_flow->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_id.operation)
	|| is_set(hw_type.operation)
	|| (es200_flow !=  nullptr && es200_flow->has_operation())
	|| (msfpga_flow !=  nullptr && msfpga_flow->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-flow" <<"[flow-id='" <<flow_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_id.is_set || is_set(flow_id.operation)) leaf_name_data.push_back(flow_id.get_name_leafdata());
    if (hw_type.is_set || is_set(hw_type.operation)) leaf_name_data.push_back(hw_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es200-flow")
    {
        if(es200_flow != nullptr)
        {
            children["es200-flow"] = es200_flow.get();
        }
        else
        {
            es200_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow>();
            es200_flow->parent = this;
            children["es200-flow"] = es200_flow.get();
        }
        return children.at("es200-flow");
    }

    if(child_yang_name == "msfpga-flow")
    {
        if(msfpga_flow != nullptr)
        {
            children["msfpga-flow"] = msfpga_flow.get();
        }
        else
        {
            msfpga_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow>();
            msfpga_flow->parent = this;
            children["msfpga-flow"] = msfpga_flow.get();
        }
        return children.at("msfpga-flow");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::get_children()
{
    if(children.find("es200-flow") == children.end())
    {
        if(es200_flow != nullptr)
        {
            children["es200-flow"] = es200_flow.get();
        }
    }

    if(children.find("msfpga-flow") == children.end())
    {
        if(msfpga_flow != nullptr)
        {
            children["msfpga-flow"] = msfpga_flow.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-id")
    {
        flow_id = value;
    }
    if(value_path == "hw-type")
    {
        hw_type = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlowS()
{
    yang_name = "hw-flow-s"; yang_parent_name = "interface";
}

Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::~HwFlowS()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::has_data() const
{
    for (std::size_t index=0; index<hw_flow.size(); index++)
    {
        if(hw_flow[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::has_operation() const
{
    for (std::size_t index=0; index<hw_flow.size(); index++)
    {
        if(hw_flow[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-flow-s";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hw-flow")
    {
        for(auto const & c : hw_flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow>();
        c->parent = this;
        hw_flow.push_back(std::move(c));
        children[segment_path] = hw_flow.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::get_children()
{
    for (auto const & c : hw_flow)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow::TxFlow()
    :
    	action{YType::uint8, "action"},
	 ctrl_check{YType::boolean, "ctrl-check"},
	 dmac_inuse{YType::boolean, "dmac-inuse"},
	 ethertype{YType::uint16, "ethertype"},
	 flow_id{YType::uint8, "flow-id"},
	 in_use{YType::boolean, "in-use"},
	 inner_vlan{YType::uint16, "inner-vlan"},
	 inner_vlan_tpid{YType::uint16, "inner-vlan-tpid"},
	 inner_vlan_up{YType::uint8, "inner-vlan-up"},
	 is_ctrl_pkt{YType::boolean, "is-ctrl-pkt"},
	 is_egress{YType::boolean, "is-egress"},
	 macda{YType::uint8, "macda"},
	 macsa{YType::uint8, "macsa"},
	 match_bad_tag{YType::boolean, "match-bad-tag"},
	 match_kay_tag{YType::boolean, "match-kay-tag"},
	 match_pri{YType::uint8, "match-pri"},
	 match_tagged{YType::boolean, "match-tagged"},
	 match_untagged{YType::boolean, "match-untagged"},
	 outer_vlan{YType::uint16, "outer-vlan"},
	 outer_vlan_tpid{YType::uint16, "outer-vlan-tpid"},
	 outer_vlan_up{YType::uint8, "outer-vlan-up"},
	 sai{YType::uint32, "sai"},
	 sci{YType::uint64, "sci"},
	 sci_inuse{YType::boolean, "sci-inuse"},
	 smac_inuse{YType::boolean, "smac-inuse"},
	 source_port{YType::uint32, "source-port"},
	 source_port_chk{YType::boolean, "source-port-chk"},
	 tci{YType::uint8, "tci"},
	 tci_an{YType::uint8, "tci-an"},
	 tci_an_chk{YType::boolean, "tci-an-chk"},
	 tci_c{YType::uint8, "tci-c"},
	 tci_chk{YType::boolean, "tci-chk"},
	 tci_e_xr{YType::uint8, "tci-e-xr"},
	 tci_sc{YType::uint8, "tci-sc"},
	 tci_scb{YType::uint8, "tci-scb"},
	 tci_v{YType::uint8, "tci-v"},
	 valid{YType::boolean, "valid"}
{
    yang_name = "tx-flow"; yang_parent_name = "msfpga-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow::~TxFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow::has_data() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action.is_set
	|| ctrl_check.is_set
	|| dmac_inuse.is_set
	|| ethertype.is_set
	|| flow_id.is_set
	|| in_use.is_set
	|| inner_vlan.is_set
	|| inner_vlan_tpid.is_set
	|| inner_vlan_up.is_set
	|| is_ctrl_pkt.is_set
	|| is_egress.is_set
	|| match_bad_tag.is_set
	|| match_kay_tag.is_set
	|| match_pri.is_set
	|| match_tagged.is_set
	|| match_untagged.is_set
	|| outer_vlan.is_set
	|| outer_vlan_tpid.is_set
	|| outer_vlan_up.is_set
	|| sai.is_set
	|| sci.is_set
	|| sci_inuse.is_set
	|| smac_inuse.is_set
	|| source_port.is_set
	|| source_port_chk.is_set
	|| tci.is_set
	|| tci_an.is_set
	|| tci_an_chk.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci_v.is_set
	|| valid.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(ctrl_check.operation)
	|| is_set(dmac_inuse.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_id.operation)
	|| is_set(in_use.operation)
	|| is_set(inner_vlan.operation)
	|| is_set(inner_vlan_tpid.operation)
	|| is_set(inner_vlan_up.operation)
	|| is_set(is_ctrl_pkt.operation)
	|| is_set(is_egress.operation)
	|| is_set(macda.operation)
	|| is_set(macsa.operation)
	|| is_set(match_bad_tag.operation)
	|| is_set(match_kay_tag.operation)
	|| is_set(match_pri.operation)
	|| is_set(match_tagged.operation)
	|| is_set(match_untagged.operation)
	|| is_set(outer_vlan.operation)
	|| is_set(outer_vlan_tpid.operation)
	|| is_set(outer_vlan_up.operation)
	|| is_set(sai.operation)
	|| is_set(sci.operation)
	|| is_set(sci_inuse.operation)
	|| is_set(smac_inuse.operation)
	|| is_set(source_port.operation)
	|| is_set(source_port_chk.operation)
	|| is_set(tci.operation)
	|| is_set(tci_an.operation)
	|| is_set(tci_an_chk.operation)
	|| is_set(tci_c.operation)
	|| is_set(tci_chk.operation)
	|| is_set(tci_e_xr.operation)
	|| is_set(tci_sc.operation)
	|| is_set(tci_scb.operation)
	|| is_set(tci_v.operation)
	|| is_set(valid.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (ctrl_check.is_set || is_set(ctrl_check.operation)) leaf_name_data.push_back(ctrl_check.get_name_leafdata());
    if (dmac_inuse.is_set || is_set(dmac_inuse.operation)) leaf_name_data.push_back(dmac_inuse.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (flow_id.is_set || is_set(flow_id.operation)) leaf_name_data.push_back(flow_id.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.operation)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (inner_vlan.is_set || is_set(inner_vlan.operation)) leaf_name_data.push_back(inner_vlan.get_name_leafdata());
    if (inner_vlan_tpid.is_set || is_set(inner_vlan_tpid.operation)) leaf_name_data.push_back(inner_vlan_tpid.get_name_leafdata());
    if (inner_vlan_up.is_set || is_set(inner_vlan_up.operation)) leaf_name_data.push_back(inner_vlan_up.get_name_leafdata());
    if (is_ctrl_pkt.is_set || is_set(is_ctrl_pkt.operation)) leaf_name_data.push_back(is_ctrl_pkt.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.operation)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (match_bad_tag.is_set || is_set(match_bad_tag.operation)) leaf_name_data.push_back(match_bad_tag.get_name_leafdata());
    if (match_kay_tag.is_set || is_set(match_kay_tag.operation)) leaf_name_data.push_back(match_kay_tag.get_name_leafdata());
    if (match_pri.is_set || is_set(match_pri.operation)) leaf_name_data.push_back(match_pri.get_name_leafdata());
    if (match_tagged.is_set || is_set(match_tagged.operation)) leaf_name_data.push_back(match_tagged.get_name_leafdata());
    if (match_untagged.is_set || is_set(match_untagged.operation)) leaf_name_data.push_back(match_untagged.get_name_leafdata());
    if (outer_vlan.is_set || is_set(outer_vlan.operation)) leaf_name_data.push_back(outer_vlan.get_name_leafdata());
    if (outer_vlan_tpid.is_set || is_set(outer_vlan_tpid.operation)) leaf_name_data.push_back(outer_vlan_tpid.get_name_leafdata());
    if (outer_vlan_up.is_set || is_set(outer_vlan_up.operation)) leaf_name_data.push_back(outer_vlan_up.get_name_leafdata());
    if (sai.is_set || is_set(sai.operation)) leaf_name_data.push_back(sai.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (sci_inuse.is_set || is_set(sci_inuse.operation)) leaf_name_data.push_back(sci_inuse.get_name_leafdata());
    if (smac_inuse.is_set || is_set(smac_inuse.operation)) leaf_name_data.push_back(smac_inuse.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (source_port_chk.is_set || is_set(source_port_chk.operation)) leaf_name_data.push_back(source_port_chk.get_name_leafdata());
    if (tci.is_set || is_set(tci.operation)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_an.is_set || is_set(tci_an.operation)) leaf_name_data.push_back(tci_an.get_name_leafdata());
    if (tci_an_chk.is_set || is_set(tci_an_chk.operation)) leaf_name_data.push_back(tci_an_chk.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.operation)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.operation)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.operation)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.operation)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.operation)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.operation)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());
    auto macsa_name_datas = macsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macsa_name_datas.begin(), macsa_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "ctrl-check")
    {
        ctrl_check = value;
    }
    if(value_path == "dmac-inuse")
    {
        dmac_inuse = value;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "flow-id")
    {
        flow_id = value;
    }
    if(value_path == "in-use")
    {
        in_use = value;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan = value;
    }
    if(value_path == "inner-vlan-tpid")
    {
        inner_vlan_tpid = value;
    }
    if(value_path == "inner-vlan-up")
    {
        inner_vlan_up = value;
    }
    if(value_path == "is-ctrl-pkt")
    {
        is_ctrl_pkt = value;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
    if(value_path == "macsa")
    {
        macsa.append(value);
    }
    if(value_path == "match-bad-tag")
    {
        match_bad_tag = value;
    }
    if(value_path == "match-kay-tag")
    {
        match_kay_tag = value;
    }
    if(value_path == "match-pri")
    {
        match_pri = value;
    }
    if(value_path == "match-tagged")
    {
        match_tagged = value;
    }
    if(value_path == "match-untagged")
    {
        match_untagged = value;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan = value;
    }
    if(value_path == "outer-vlan-tpid")
    {
        outer_vlan_tpid = value;
    }
    if(value_path == "outer-vlan-up")
    {
        outer_vlan_up = value;
    }
    if(value_path == "sai")
    {
        sai = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "sci-inuse")
    {
        sci_inuse = value;
    }
    if(value_path == "smac-inuse")
    {
        smac_inuse = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "source-port-chk")
    {
        source_port_chk = value;
    }
    if(value_path == "tci")
    {
        tci = value;
    }
    if(value_path == "tci-an")
    {
        tci_an = value;
    }
    if(value_path == "tci-an-chk")
    {
        tci_an_chk = value;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow::RxFlow()
    :
    	action{YType::uint8, "action"},
	 ctrl_check{YType::boolean, "ctrl-check"},
	 dmac_inuse{YType::boolean, "dmac-inuse"},
	 ethertype{YType::uint16, "ethertype"},
	 flow_id{YType::uint8, "flow-id"},
	 in_use{YType::boolean, "in-use"},
	 inner_vlan{YType::uint16, "inner-vlan"},
	 inner_vlan_tpid{YType::uint16, "inner-vlan-tpid"},
	 inner_vlan_up{YType::uint8, "inner-vlan-up"},
	 is_ctrl_pkt{YType::boolean, "is-ctrl-pkt"},
	 is_egress{YType::boolean, "is-egress"},
	 macda{YType::uint8, "macda"},
	 macsa{YType::uint8, "macsa"},
	 match_bad_tag{YType::boolean, "match-bad-tag"},
	 match_kay_tag{YType::boolean, "match-kay-tag"},
	 match_pri{YType::uint8, "match-pri"},
	 match_tagged{YType::boolean, "match-tagged"},
	 match_untagged{YType::boolean, "match-untagged"},
	 outer_vlan{YType::uint16, "outer-vlan"},
	 outer_vlan_tpid{YType::uint16, "outer-vlan-tpid"},
	 outer_vlan_up{YType::uint8, "outer-vlan-up"},
	 sai{YType::uint32, "sai"},
	 sci{YType::uint64, "sci"},
	 sci_inuse{YType::boolean, "sci-inuse"},
	 smac_inuse{YType::boolean, "smac-inuse"},
	 source_port{YType::uint32, "source-port"},
	 source_port_chk{YType::boolean, "source-port-chk"},
	 tci{YType::uint8, "tci"},
	 tci_an{YType::uint8, "tci-an"},
	 tci_an_chk{YType::boolean, "tci-an-chk"},
	 tci_c{YType::uint8, "tci-c"},
	 tci_chk{YType::boolean, "tci-chk"},
	 tci_e_xr{YType::uint8, "tci-e-xr"},
	 tci_sc{YType::uint8, "tci-sc"},
	 tci_scb{YType::uint8, "tci-scb"},
	 tci_v{YType::uint8, "tci-v"},
	 valid{YType::boolean, "valid"}
{
    yang_name = "rx-flow"; yang_parent_name = "msfpga-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow::~RxFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow::has_data() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action.is_set
	|| ctrl_check.is_set
	|| dmac_inuse.is_set
	|| ethertype.is_set
	|| flow_id.is_set
	|| in_use.is_set
	|| inner_vlan.is_set
	|| inner_vlan_tpid.is_set
	|| inner_vlan_up.is_set
	|| is_ctrl_pkt.is_set
	|| is_egress.is_set
	|| match_bad_tag.is_set
	|| match_kay_tag.is_set
	|| match_pri.is_set
	|| match_tagged.is_set
	|| match_untagged.is_set
	|| outer_vlan.is_set
	|| outer_vlan_tpid.is_set
	|| outer_vlan_up.is_set
	|| sai.is_set
	|| sci.is_set
	|| sci_inuse.is_set
	|| smac_inuse.is_set
	|| source_port.is_set
	|| source_port_chk.is_set
	|| tci.is_set
	|| tci_an.is_set
	|| tci_an_chk.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci_v.is_set
	|| valid.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(ctrl_check.operation)
	|| is_set(dmac_inuse.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_id.operation)
	|| is_set(in_use.operation)
	|| is_set(inner_vlan.operation)
	|| is_set(inner_vlan_tpid.operation)
	|| is_set(inner_vlan_up.operation)
	|| is_set(is_ctrl_pkt.operation)
	|| is_set(is_egress.operation)
	|| is_set(macda.operation)
	|| is_set(macsa.operation)
	|| is_set(match_bad_tag.operation)
	|| is_set(match_kay_tag.operation)
	|| is_set(match_pri.operation)
	|| is_set(match_tagged.operation)
	|| is_set(match_untagged.operation)
	|| is_set(outer_vlan.operation)
	|| is_set(outer_vlan_tpid.operation)
	|| is_set(outer_vlan_up.operation)
	|| is_set(sai.operation)
	|| is_set(sci.operation)
	|| is_set(sci_inuse.operation)
	|| is_set(smac_inuse.operation)
	|| is_set(source_port.operation)
	|| is_set(source_port_chk.operation)
	|| is_set(tci.operation)
	|| is_set(tci_an.operation)
	|| is_set(tci_an_chk.operation)
	|| is_set(tci_c.operation)
	|| is_set(tci_chk.operation)
	|| is_set(tci_e_xr.operation)
	|| is_set(tci_sc.operation)
	|| is_set(tci_scb.operation)
	|| is_set(tci_v.operation)
	|| is_set(valid.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (ctrl_check.is_set || is_set(ctrl_check.operation)) leaf_name_data.push_back(ctrl_check.get_name_leafdata());
    if (dmac_inuse.is_set || is_set(dmac_inuse.operation)) leaf_name_data.push_back(dmac_inuse.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (flow_id.is_set || is_set(flow_id.operation)) leaf_name_data.push_back(flow_id.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.operation)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (inner_vlan.is_set || is_set(inner_vlan.operation)) leaf_name_data.push_back(inner_vlan.get_name_leafdata());
    if (inner_vlan_tpid.is_set || is_set(inner_vlan_tpid.operation)) leaf_name_data.push_back(inner_vlan_tpid.get_name_leafdata());
    if (inner_vlan_up.is_set || is_set(inner_vlan_up.operation)) leaf_name_data.push_back(inner_vlan_up.get_name_leafdata());
    if (is_ctrl_pkt.is_set || is_set(is_ctrl_pkt.operation)) leaf_name_data.push_back(is_ctrl_pkt.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.operation)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (match_bad_tag.is_set || is_set(match_bad_tag.operation)) leaf_name_data.push_back(match_bad_tag.get_name_leafdata());
    if (match_kay_tag.is_set || is_set(match_kay_tag.operation)) leaf_name_data.push_back(match_kay_tag.get_name_leafdata());
    if (match_pri.is_set || is_set(match_pri.operation)) leaf_name_data.push_back(match_pri.get_name_leafdata());
    if (match_tagged.is_set || is_set(match_tagged.operation)) leaf_name_data.push_back(match_tagged.get_name_leafdata());
    if (match_untagged.is_set || is_set(match_untagged.operation)) leaf_name_data.push_back(match_untagged.get_name_leafdata());
    if (outer_vlan.is_set || is_set(outer_vlan.operation)) leaf_name_data.push_back(outer_vlan.get_name_leafdata());
    if (outer_vlan_tpid.is_set || is_set(outer_vlan_tpid.operation)) leaf_name_data.push_back(outer_vlan_tpid.get_name_leafdata());
    if (outer_vlan_up.is_set || is_set(outer_vlan_up.operation)) leaf_name_data.push_back(outer_vlan_up.get_name_leafdata());
    if (sai.is_set || is_set(sai.operation)) leaf_name_data.push_back(sai.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (sci_inuse.is_set || is_set(sci_inuse.operation)) leaf_name_data.push_back(sci_inuse.get_name_leafdata());
    if (smac_inuse.is_set || is_set(smac_inuse.operation)) leaf_name_data.push_back(smac_inuse.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (source_port_chk.is_set || is_set(source_port_chk.operation)) leaf_name_data.push_back(source_port_chk.get_name_leafdata());
    if (tci.is_set || is_set(tci.operation)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_an.is_set || is_set(tci_an.operation)) leaf_name_data.push_back(tci_an.get_name_leafdata());
    if (tci_an_chk.is_set || is_set(tci_an_chk.operation)) leaf_name_data.push_back(tci_an_chk.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.operation)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.operation)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.operation)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.operation)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.operation)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.operation)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());
    auto macsa_name_datas = macsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macsa_name_datas.begin(), macsa_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "ctrl-check")
    {
        ctrl_check = value;
    }
    if(value_path == "dmac-inuse")
    {
        dmac_inuse = value;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "flow-id")
    {
        flow_id = value;
    }
    if(value_path == "in-use")
    {
        in_use = value;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan = value;
    }
    if(value_path == "inner-vlan-tpid")
    {
        inner_vlan_tpid = value;
    }
    if(value_path == "inner-vlan-up")
    {
        inner_vlan_up = value;
    }
    if(value_path == "is-ctrl-pkt")
    {
        is_ctrl_pkt = value;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
    if(value_path == "macsa")
    {
        macsa.append(value);
    }
    if(value_path == "match-bad-tag")
    {
        match_bad_tag = value;
    }
    if(value_path == "match-kay-tag")
    {
        match_kay_tag = value;
    }
    if(value_path == "match-pri")
    {
        match_pri = value;
    }
    if(value_path == "match-tagged")
    {
        match_tagged = value;
    }
    if(value_path == "match-untagged")
    {
        match_untagged = value;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan = value;
    }
    if(value_path == "outer-vlan-tpid")
    {
        outer_vlan_tpid = value;
    }
    if(value_path == "outer-vlan-up")
    {
        outer_vlan_up = value;
    }
    if(value_path == "sai")
    {
        sai = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "sci-inuse")
    {
        sci_inuse = value;
    }
    if(value_path == "smac-inuse")
    {
        smac_inuse = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "source-port-chk")
    {
        source_port_chk = value;
    }
    if(value_path == "tci")
    {
        tci = value;
    }
    if(value_path == "tci-an")
    {
        tci_an = value;
    }
    if(value_path == "tci-an-chk")
    {
        tci_an_chk = value;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::MsfpgaFlow()
    :
    rx_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow>())
	,tx_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow>())
{
    rx_flow->parent = this;
    children["rx-flow"] = rx_flow.get();

    tx_flow->parent = this;
    children["tx-flow"] = tx_flow.get();

    yang_name = "msfpga-flow"; yang_parent_name = "sw-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::~MsfpgaFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::has_data() const
{
    return (rx_flow !=  nullptr && rx_flow->has_data())
	|| (tx_flow !=  nullptr && tx_flow->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::has_operation() const
{
    return is_set(operation)
	|| (rx_flow !=  nullptr && rx_flow->has_operation())
	|| (tx_flow !=  nullptr && tx_flow->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-flow")
    {
        if(rx_flow != nullptr)
        {
            children["rx-flow"] = rx_flow.get();
        }
        else
        {
            rx_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow>();
            rx_flow->parent = this;
            children["rx-flow"] = rx_flow.get();
        }
        return children.at("rx-flow");
    }

    if(child_yang_name == "tx-flow")
    {
        if(tx_flow != nullptr)
        {
            children["tx-flow"] = tx_flow.get();
        }
        else
        {
            tx_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow>();
            tx_flow->parent = this;
            children["tx-flow"] = tx_flow.get();
        }
        return children.at("tx-flow");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::get_children()
{
    if(children.find("rx-flow") == children.end())
    {
        if(rx_flow != nullptr)
        {
            children["rx-flow"] = rx_flow.get();
        }
    }

    if(children.find("tx-flow") == children.end())
    {
        if(tx_flow != nullptr)
        {
            children["tx-flow"] = tx_flow.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow::TxFlow()
    :
    	drop{YType::boolean, "drop"},
	 ethertype{YType::uint16, "ethertype"},
	 flow_miss{YType::uint64, "flow-miss"},
	 flow_no{YType::uint32, "flow-no"},
	 force_ctrl{YType::boolean, "force-ctrl"},
	 inner_vlan_dei{YType::boolean, "inner-vlan-dei"},
	 inner_vlan_id{YType::uint16, "inner-vlan-id"},
	 inner_vlan_user_pri{YType::uint8, "inner-vlan-user-pri"},
	 is_flow_enabled{YType::boolean, "is-flow-enabled"},
	 macda{YType::uint8, "macda"},
	 mask_da{YType::uint64, "mask-da"},
	 mask_ethertype{YType::uint32, "mask-ethertype"},
	 mask_plain_bits{YType::uint64, "mask-plain-bits"},
	 match_priority{YType::uint8, "match-priority"},
	 mpls1_bos{YType::uint8, "mpls1-bos"},
	 mpls1_exp{YType::uint8, "mpls1-exp"},
	 mpls1_label{YType::uint32, "mpls1-label"},
	 mpls2_bos{YType::uint8, "mpls2-bos"},
	 mpls2_exp{YType::uint8, "mpls2-exp"},
	 mpls2_label{YType::uint32, "mpls2-label"},
	 multi_flow_match{YType::uint64, "multi-flow-match"},
	 outer_vlan_dei{YType::boolean, "outer-vlan-dei"},
	 outer_vlan_id{YType::uint16, "outer-vlan-id"},
	 outer_vlan_user_pri{YType::uint8, "outer-vlan-user-pri"},
	 parser_dropped{YType::uint64, "parser-dropped"},
	 pbb_bvid{YType::uint32, "pbb-bvid"},
	 pbb_dei{YType::uint8, "pbb-dei"},
	 pbb_pcp{YType::uint8, "pbb-pcp"},
	 pbb_sid{YType::uint32, "pbb-sid"},
	 pkt_type{YType::uint32, "pkt-type"},
	 pkts_ctrl{YType::uint64, "pkts-ctrl"},
	 pkts_data{YType::uint64, "pkts-data"},
	 pkts_dropped{YType::uint64, "pkts-dropped"},
	 pkts_err_in{YType::uint64, "pkts-err-in"},
	 plain_bits{YType::uint64, "plain-bits"},
	 plain_bits_size{YType::uint8, "plain-bits-size"},
	 psci{YType::uint64, "psci"},
	 tag_num{YType::uint32, "tag-num"},
	 tci{YType::uint8, "tci"},
	 tci_c{YType::uint8, "tci-c"},
	 tci_chk{YType::boolean, "tci-chk"},
	 tci_e_xr{YType::uint8, "tci-e-xr"},
	 tci_sc{YType::uint8, "tci-sc"},
	 tci_scb{YType::uint8, "tci-scb"},
	 tci_v{YType::uint8, "tci-v"},
	 vlan_dei{YType::uint8, "vlan-dei"},
	 vlan_id{YType::uint16, "vlan-id"},
	 vlan_pcp{YType::uint8, "vlan-pcp"}
{
    yang_name = "tx-flow"; yang_parent_name = "es200-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow::~TxFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow::has_data() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return drop.is_set
	|| ethertype.is_set
	|| flow_miss.is_set
	|| flow_no.is_set
	|| force_ctrl.is_set
	|| inner_vlan_dei.is_set
	|| inner_vlan_id.is_set
	|| inner_vlan_user_pri.is_set
	|| is_flow_enabled.is_set
	|| mask_da.is_set
	|| mask_ethertype.is_set
	|| mask_plain_bits.is_set
	|| match_priority.is_set
	|| mpls1_bos.is_set
	|| mpls1_exp.is_set
	|| mpls1_label.is_set
	|| mpls2_bos.is_set
	|| mpls2_exp.is_set
	|| mpls2_label.is_set
	|| multi_flow_match.is_set
	|| outer_vlan_dei.is_set
	|| outer_vlan_id.is_set
	|| outer_vlan_user_pri.is_set
	|| parser_dropped.is_set
	|| pbb_bvid.is_set
	|| pbb_dei.is_set
	|| pbb_pcp.is_set
	|| pbb_sid.is_set
	|| pkt_type.is_set
	|| pkts_ctrl.is_set
	|| pkts_data.is_set
	|| pkts_dropped.is_set
	|| pkts_err_in.is_set
	|| plain_bits.is_set
	|| plain_bits_size.is_set
	|| psci.is_set
	|| tag_num.is_set
	|| tci.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci_v.is_set
	|| vlan_dei.is_set
	|| vlan_id.is_set
	|| vlan_pcp.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_miss.operation)
	|| is_set(flow_no.operation)
	|| is_set(force_ctrl.operation)
	|| is_set(inner_vlan_dei.operation)
	|| is_set(inner_vlan_id.operation)
	|| is_set(inner_vlan_user_pri.operation)
	|| is_set(is_flow_enabled.operation)
	|| is_set(macda.operation)
	|| is_set(mask_da.operation)
	|| is_set(mask_ethertype.operation)
	|| is_set(mask_plain_bits.operation)
	|| is_set(match_priority.operation)
	|| is_set(mpls1_bos.operation)
	|| is_set(mpls1_exp.operation)
	|| is_set(mpls1_label.operation)
	|| is_set(mpls2_bos.operation)
	|| is_set(mpls2_exp.operation)
	|| is_set(mpls2_label.operation)
	|| is_set(multi_flow_match.operation)
	|| is_set(outer_vlan_dei.operation)
	|| is_set(outer_vlan_id.operation)
	|| is_set(outer_vlan_user_pri.operation)
	|| is_set(parser_dropped.operation)
	|| is_set(pbb_bvid.operation)
	|| is_set(pbb_dei.operation)
	|| is_set(pbb_pcp.operation)
	|| is_set(pbb_sid.operation)
	|| is_set(pkt_type.operation)
	|| is_set(pkts_ctrl.operation)
	|| is_set(pkts_data.operation)
	|| is_set(pkts_dropped.operation)
	|| is_set(pkts_err_in.operation)
	|| is_set(plain_bits.operation)
	|| is_set(plain_bits_size.operation)
	|| is_set(psci.operation)
	|| is_set(tag_num.operation)
	|| is_set(tci.operation)
	|| is_set(tci_c.operation)
	|| is_set(tci_chk.operation)
	|| is_set(tci_e_xr.operation)
	|| is_set(tci_sc.operation)
	|| is_set(tci_scb.operation)
	|| is_set(tci_v.operation)
	|| is_set(vlan_dei.operation)
	|| is_set(vlan_id.operation)
	|| is_set(vlan_pcp.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (flow_miss.is_set || is_set(flow_miss.operation)) leaf_name_data.push_back(flow_miss.get_name_leafdata());
    if (flow_no.is_set || is_set(flow_no.operation)) leaf_name_data.push_back(flow_no.get_name_leafdata());
    if (force_ctrl.is_set || is_set(force_ctrl.operation)) leaf_name_data.push_back(force_ctrl.get_name_leafdata());
    if (inner_vlan_dei.is_set || is_set(inner_vlan_dei.operation)) leaf_name_data.push_back(inner_vlan_dei.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.operation)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (inner_vlan_user_pri.is_set || is_set(inner_vlan_user_pri.operation)) leaf_name_data.push_back(inner_vlan_user_pri.get_name_leafdata());
    if (is_flow_enabled.is_set || is_set(is_flow_enabled.operation)) leaf_name_data.push_back(is_flow_enabled.get_name_leafdata());
    if (mask_da.is_set || is_set(mask_da.operation)) leaf_name_data.push_back(mask_da.get_name_leafdata());
    if (mask_ethertype.is_set || is_set(mask_ethertype.operation)) leaf_name_data.push_back(mask_ethertype.get_name_leafdata());
    if (mask_plain_bits.is_set || is_set(mask_plain_bits.operation)) leaf_name_data.push_back(mask_plain_bits.get_name_leafdata());
    if (match_priority.is_set || is_set(match_priority.operation)) leaf_name_data.push_back(match_priority.get_name_leafdata());
    if (mpls1_bos.is_set || is_set(mpls1_bos.operation)) leaf_name_data.push_back(mpls1_bos.get_name_leafdata());
    if (mpls1_exp.is_set || is_set(mpls1_exp.operation)) leaf_name_data.push_back(mpls1_exp.get_name_leafdata());
    if (mpls1_label.is_set || is_set(mpls1_label.operation)) leaf_name_data.push_back(mpls1_label.get_name_leafdata());
    if (mpls2_bos.is_set || is_set(mpls2_bos.operation)) leaf_name_data.push_back(mpls2_bos.get_name_leafdata());
    if (mpls2_exp.is_set || is_set(mpls2_exp.operation)) leaf_name_data.push_back(mpls2_exp.get_name_leafdata());
    if (mpls2_label.is_set || is_set(mpls2_label.operation)) leaf_name_data.push_back(mpls2_label.get_name_leafdata());
    if (multi_flow_match.is_set || is_set(multi_flow_match.operation)) leaf_name_data.push_back(multi_flow_match.get_name_leafdata());
    if (outer_vlan_dei.is_set || is_set(outer_vlan_dei.operation)) leaf_name_data.push_back(outer_vlan_dei.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.operation)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (outer_vlan_user_pri.is_set || is_set(outer_vlan_user_pri.operation)) leaf_name_data.push_back(outer_vlan_user_pri.get_name_leafdata());
    if (parser_dropped.is_set || is_set(parser_dropped.operation)) leaf_name_data.push_back(parser_dropped.get_name_leafdata());
    if (pbb_bvid.is_set || is_set(pbb_bvid.operation)) leaf_name_data.push_back(pbb_bvid.get_name_leafdata());
    if (pbb_dei.is_set || is_set(pbb_dei.operation)) leaf_name_data.push_back(pbb_dei.get_name_leafdata());
    if (pbb_pcp.is_set || is_set(pbb_pcp.operation)) leaf_name_data.push_back(pbb_pcp.get_name_leafdata());
    if (pbb_sid.is_set || is_set(pbb_sid.operation)) leaf_name_data.push_back(pbb_sid.get_name_leafdata());
    if (pkt_type.is_set || is_set(pkt_type.operation)) leaf_name_data.push_back(pkt_type.get_name_leafdata());
    if (pkts_ctrl.is_set || is_set(pkts_ctrl.operation)) leaf_name_data.push_back(pkts_ctrl.get_name_leafdata());
    if (pkts_data.is_set || is_set(pkts_data.operation)) leaf_name_data.push_back(pkts_data.get_name_leafdata());
    if (pkts_dropped.is_set || is_set(pkts_dropped.operation)) leaf_name_data.push_back(pkts_dropped.get_name_leafdata());
    if (pkts_err_in.is_set || is_set(pkts_err_in.operation)) leaf_name_data.push_back(pkts_err_in.get_name_leafdata());
    if (plain_bits.is_set || is_set(plain_bits.operation)) leaf_name_data.push_back(plain_bits.get_name_leafdata());
    if (plain_bits_size.is_set || is_set(plain_bits_size.operation)) leaf_name_data.push_back(plain_bits_size.get_name_leafdata());
    if (psci.is_set || is_set(psci.operation)) leaf_name_data.push_back(psci.get_name_leafdata());
    if (tag_num.is_set || is_set(tag_num.operation)) leaf_name_data.push_back(tag_num.get_name_leafdata());
    if (tci.is_set || is_set(tci.operation)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.operation)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.operation)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.operation)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.operation)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.operation)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.operation)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (vlan_dei.is_set || is_set(vlan_dei.operation)) leaf_name_data.push_back(vlan_dei.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (vlan_pcp.is_set || is_set(vlan_pcp.operation)) leaf_name_data.push_back(vlan_pcp.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "flow-miss")
    {
        flow_miss = value;
    }
    if(value_path == "flow-no")
    {
        flow_no = value;
    }
    if(value_path == "force-ctrl")
    {
        force_ctrl = value;
    }
    if(value_path == "inner-vlan-dei")
    {
        inner_vlan_dei = value;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
    }
    if(value_path == "inner-vlan-user-pri")
    {
        inner_vlan_user_pri = value;
    }
    if(value_path == "is-flow-enabled")
    {
        is_flow_enabled = value;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
    if(value_path == "mask-da")
    {
        mask_da = value;
    }
    if(value_path == "mask-ethertype")
    {
        mask_ethertype = value;
    }
    if(value_path == "mask-plain-bits")
    {
        mask_plain_bits = value;
    }
    if(value_path == "match-priority")
    {
        match_priority = value;
    }
    if(value_path == "mpls1-bos")
    {
        mpls1_bos = value;
    }
    if(value_path == "mpls1-exp")
    {
        mpls1_exp = value;
    }
    if(value_path == "mpls1-label")
    {
        mpls1_label = value;
    }
    if(value_path == "mpls2-bos")
    {
        mpls2_bos = value;
    }
    if(value_path == "mpls2-exp")
    {
        mpls2_exp = value;
    }
    if(value_path == "mpls2-label")
    {
        mpls2_label = value;
    }
    if(value_path == "multi-flow-match")
    {
        multi_flow_match = value;
    }
    if(value_path == "outer-vlan-dei")
    {
        outer_vlan_dei = value;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
    }
    if(value_path == "outer-vlan-user-pri")
    {
        outer_vlan_user_pri = value;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped = value;
    }
    if(value_path == "pbb-bvid")
    {
        pbb_bvid = value;
    }
    if(value_path == "pbb-dei")
    {
        pbb_dei = value;
    }
    if(value_path == "pbb-pcp")
    {
        pbb_pcp = value;
    }
    if(value_path == "pbb-sid")
    {
        pbb_sid = value;
    }
    if(value_path == "pkt-type")
    {
        pkt_type = value;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl = value;
    }
    if(value_path == "pkts-data")
    {
        pkts_data = value;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped = value;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in = value;
    }
    if(value_path == "plain-bits")
    {
        plain_bits = value;
    }
    if(value_path == "plain-bits-size")
    {
        plain_bits_size = value;
    }
    if(value_path == "psci")
    {
        psci = value;
    }
    if(value_path == "tag-num")
    {
        tag_num = value;
    }
    if(value_path == "tci")
    {
        tci = value;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
    }
    if(value_path == "vlan-dei")
    {
        vlan_dei = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
    if(value_path == "vlan-pcp")
    {
        vlan_pcp = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow::RxFlow()
    :
    	drop{YType::boolean, "drop"},
	 ethertype{YType::uint16, "ethertype"},
	 flow_miss{YType::uint64, "flow-miss"},
	 flow_no{YType::uint32, "flow-no"},
	 force_ctrl{YType::boolean, "force-ctrl"},
	 inner_vlan_dei{YType::boolean, "inner-vlan-dei"},
	 inner_vlan_id{YType::uint16, "inner-vlan-id"},
	 inner_vlan_user_pri{YType::uint8, "inner-vlan-user-pri"},
	 is_flow_enabled{YType::boolean, "is-flow-enabled"},
	 macda{YType::uint8, "macda"},
	 mask_da{YType::uint64, "mask-da"},
	 mask_ethertype{YType::uint32, "mask-ethertype"},
	 mask_plain_bits{YType::uint64, "mask-plain-bits"},
	 match_priority{YType::uint8, "match-priority"},
	 mpls1_bos{YType::uint8, "mpls1-bos"},
	 mpls1_exp{YType::uint8, "mpls1-exp"},
	 mpls1_label{YType::uint32, "mpls1-label"},
	 mpls2_bos{YType::uint8, "mpls2-bos"},
	 mpls2_exp{YType::uint8, "mpls2-exp"},
	 mpls2_label{YType::uint32, "mpls2-label"},
	 multi_flow_match{YType::uint64, "multi-flow-match"},
	 outer_vlan_dei{YType::boolean, "outer-vlan-dei"},
	 outer_vlan_id{YType::uint16, "outer-vlan-id"},
	 outer_vlan_user_pri{YType::uint8, "outer-vlan-user-pri"},
	 parser_dropped{YType::uint64, "parser-dropped"},
	 pbb_bvid{YType::uint32, "pbb-bvid"},
	 pbb_dei{YType::uint8, "pbb-dei"},
	 pbb_pcp{YType::uint8, "pbb-pcp"},
	 pbb_sid{YType::uint32, "pbb-sid"},
	 pkt_type{YType::uint32, "pkt-type"},
	 pkts_ctrl{YType::uint64, "pkts-ctrl"},
	 pkts_data{YType::uint64, "pkts-data"},
	 pkts_dropped{YType::uint64, "pkts-dropped"},
	 pkts_err_in{YType::uint64, "pkts-err-in"},
	 plain_bits{YType::uint64, "plain-bits"},
	 plain_bits_size{YType::uint8, "plain-bits-size"},
	 psci{YType::uint64, "psci"},
	 tag_num{YType::uint32, "tag-num"},
	 tci{YType::uint8, "tci"},
	 tci_c{YType::uint8, "tci-c"},
	 tci_chk{YType::boolean, "tci-chk"},
	 tci_e_xr{YType::uint8, "tci-e-xr"},
	 tci_sc{YType::uint8, "tci-sc"},
	 tci_scb{YType::uint8, "tci-scb"},
	 tci_v{YType::uint8, "tci-v"},
	 vlan_dei{YType::uint8, "vlan-dei"},
	 vlan_id{YType::uint16, "vlan-id"},
	 vlan_pcp{YType::uint8, "vlan-pcp"}
{
    yang_name = "rx-flow"; yang_parent_name = "es200-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow::~RxFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow::has_data() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return drop.is_set
	|| ethertype.is_set
	|| flow_miss.is_set
	|| flow_no.is_set
	|| force_ctrl.is_set
	|| inner_vlan_dei.is_set
	|| inner_vlan_id.is_set
	|| inner_vlan_user_pri.is_set
	|| is_flow_enabled.is_set
	|| mask_da.is_set
	|| mask_ethertype.is_set
	|| mask_plain_bits.is_set
	|| match_priority.is_set
	|| mpls1_bos.is_set
	|| mpls1_exp.is_set
	|| mpls1_label.is_set
	|| mpls2_bos.is_set
	|| mpls2_exp.is_set
	|| mpls2_label.is_set
	|| multi_flow_match.is_set
	|| outer_vlan_dei.is_set
	|| outer_vlan_id.is_set
	|| outer_vlan_user_pri.is_set
	|| parser_dropped.is_set
	|| pbb_bvid.is_set
	|| pbb_dei.is_set
	|| pbb_pcp.is_set
	|| pbb_sid.is_set
	|| pkt_type.is_set
	|| pkts_ctrl.is_set
	|| pkts_data.is_set
	|| pkts_dropped.is_set
	|| pkts_err_in.is_set
	|| plain_bits.is_set
	|| plain_bits_size.is_set
	|| psci.is_set
	|| tag_num.is_set
	|| tci.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci_v.is_set
	|| vlan_dei.is_set
	|| vlan_id.is_set
	|| vlan_pcp.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_miss.operation)
	|| is_set(flow_no.operation)
	|| is_set(force_ctrl.operation)
	|| is_set(inner_vlan_dei.operation)
	|| is_set(inner_vlan_id.operation)
	|| is_set(inner_vlan_user_pri.operation)
	|| is_set(is_flow_enabled.operation)
	|| is_set(macda.operation)
	|| is_set(mask_da.operation)
	|| is_set(mask_ethertype.operation)
	|| is_set(mask_plain_bits.operation)
	|| is_set(match_priority.operation)
	|| is_set(mpls1_bos.operation)
	|| is_set(mpls1_exp.operation)
	|| is_set(mpls1_label.operation)
	|| is_set(mpls2_bos.operation)
	|| is_set(mpls2_exp.operation)
	|| is_set(mpls2_label.operation)
	|| is_set(multi_flow_match.operation)
	|| is_set(outer_vlan_dei.operation)
	|| is_set(outer_vlan_id.operation)
	|| is_set(outer_vlan_user_pri.operation)
	|| is_set(parser_dropped.operation)
	|| is_set(pbb_bvid.operation)
	|| is_set(pbb_dei.operation)
	|| is_set(pbb_pcp.operation)
	|| is_set(pbb_sid.operation)
	|| is_set(pkt_type.operation)
	|| is_set(pkts_ctrl.operation)
	|| is_set(pkts_data.operation)
	|| is_set(pkts_dropped.operation)
	|| is_set(pkts_err_in.operation)
	|| is_set(plain_bits.operation)
	|| is_set(plain_bits_size.operation)
	|| is_set(psci.operation)
	|| is_set(tag_num.operation)
	|| is_set(tci.operation)
	|| is_set(tci_c.operation)
	|| is_set(tci_chk.operation)
	|| is_set(tci_e_xr.operation)
	|| is_set(tci_sc.operation)
	|| is_set(tci_scb.operation)
	|| is_set(tci_v.operation)
	|| is_set(vlan_dei.operation)
	|| is_set(vlan_id.operation)
	|| is_set(vlan_pcp.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (flow_miss.is_set || is_set(flow_miss.operation)) leaf_name_data.push_back(flow_miss.get_name_leafdata());
    if (flow_no.is_set || is_set(flow_no.operation)) leaf_name_data.push_back(flow_no.get_name_leafdata());
    if (force_ctrl.is_set || is_set(force_ctrl.operation)) leaf_name_data.push_back(force_ctrl.get_name_leafdata());
    if (inner_vlan_dei.is_set || is_set(inner_vlan_dei.operation)) leaf_name_data.push_back(inner_vlan_dei.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.operation)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (inner_vlan_user_pri.is_set || is_set(inner_vlan_user_pri.operation)) leaf_name_data.push_back(inner_vlan_user_pri.get_name_leafdata());
    if (is_flow_enabled.is_set || is_set(is_flow_enabled.operation)) leaf_name_data.push_back(is_flow_enabled.get_name_leafdata());
    if (mask_da.is_set || is_set(mask_da.operation)) leaf_name_data.push_back(mask_da.get_name_leafdata());
    if (mask_ethertype.is_set || is_set(mask_ethertype.operation)) leaf_name_data.push_back(mask_ethertype.get_name_leafdata());
    if (mask_plain_bits.is_set || is_set(mask_plain_bits.operation)) leaf_name_data.push_back(mask_plain_bits.get_name_leafdata());
    if (match_priority.is_set || is_set(match_priority.operation)) leaf_name_data.push_back(match_priority.get_name_leafdata());
    if (mpls1_bos.is_set || is_set(mpls1_bos.operation)) leaf_name_data.push_back(mpls1_bos.get_name_leafdata());
    if (mpls1_exp.is_set || is_set(mpls1_exp.operation)) leaf_name_data.push_back(mpls1_exp.get_name_leafdata());
    if (mpls1_label.is_set || is_set(mpls1_label.operation)) leaf_name_data.push_back(mpls1_label.get_name_leafdata());
    if (mpls2_bos.is_set || is_set(mpls2_bos.operation)) leaf_name_data.push_back(mpls2_bos.get_name_leafdata());
    if (mpls2_exp.is_set || is_set(mpls2_exp.operation)) leaf_name_data.push_back(mpls2_exp.get_name_leafdata());
    if (mpls2_label.is_set || is_set(mpls2_label.operation)) leaf_name_data.push_back(mpls2_label.get_name_leafdata());
    if (multi_flow_match.is_set || is_set(multi_flow_match.operation)) leaf_name_data.push_back(multi_flow_match.get_name_leafdata());
    if (outer_vlan_dei.is_set || is_set(outer_vlan_dei.operation)) leaf_name_data.push_back(outer_vlan_dei.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.operation)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (outer_vlan_user_pri.is_set || is_set(outer_vlan_user_pri.operation)) leaf_name_data.push_back(outer_vlan_user_pri.get_name_leafdata());
    if (parser_dropped.is_set || is_set(parser_dropped.operation)) leaf_name_data.push_back(parser_dropped.get_name_leafdata());
    if (pbb_bvid.is_set || is_set(pbb_bvid.operation)) leaf_name_data.push_back(pbb_bvid.get_name_leafdata());
    if (pbb_dei.is_set || is_set(pbb_dei.operation)) leaf_name_data.push_back(pbb_dei.get_name_leafdata());
    if (pbb_pcp.is_set || is_set(pbb_pcp.operation)) leaf_name_data.push_back(pbb_pcp.get_name_leafdata());
    if (pbb_sid.is_set || is_set(pbb_sid.operation)) leaf_name_data.push_back(pbb_sid.get_name_leafdata());
    if (pkt_type.is_set || is_set(pkt_type.operation)) leaf_name_data.push_back(pkt_type.get_name_leafdata());
    if (pkts_ctrl.is_set || is_set(pkts_ctrl.operation)) leaf_name_data.push_back(pkts_ctrl.get_name_leafdata());
    if (pkts_data.is_set || is_set(pkts_data.operation)) leaf_name_data.push_back(pkts_data.get_name_leafdata());
    if (pkts_dropped.is_set || is_set(pkts_dropped.operation)) leaf_name_data.push_back(pkts_dropped.get_name_leafdata());
    if (pkts_err_in.is_set || is_set(pkts_err_in.operation)) leaf_name_data.push_back(pkts_err_in.get_name_leafdata());
    if (plain_bits.is_set || is_set(plain_bits.operation)) leaf_name_data.push_back(plain_bits.get_name_leafdata());
    if (plain_bits_size.is_set || is_set(plain_bits_size.operation)) leaf_name_data.push_back(plain_bits_size.get_name_leafdata());
    if (psci.is_set || is_set(psci.operation)) leaf_name_data.push_back(psci.get_name_leafdata());
    if (tag_num.is_set || is_set(tag_num.operation)) leaf_name_data.push_back(tag_num.get_name_leafdata());
    if (tci.is_set || is_set(tci.operation)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.operation)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.operation)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.operation)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.operation)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.operation)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.operation)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (vlan_dei.is_set || is_set(vlan_dei.operation)) leaf_name_data.push_back(vlan_dei.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (vlan_pcp.is_set || is_set(vlan_pcp.operation)) leaf_name_data.push_back(vlan_pcp.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "flow-miss")
    {
        flow_miss = value;
    }
    if(value_path == "flow-no")
    {
        flow_no = value;
    }
    if(value_path == "force-ctrl")
    {
        force_ctrl = value;
    }
    if(value_path == "inner-vlan-dei")
    {
        inner_vlan_dei = value;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
    }
    if(value_path == "inner-vlan-user-pri")
    {
        inner_vlan_user_pri = value;
    }
    if(value_path == "is-flow-enabled")
    {
        is_flow_enabled = value;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
    if(value_path == "mask-da")
    {
        mask_da = value;
    }
    if(value_path == "mask-ethertype")
    {
        mask_ethertype = value;
    }
    if(value_path == "mask-plain-bits")
    {
        mask_plain_bits = value;
    }
    if(value_path == "match-priority")
    {
        match_priority = value;
    }
    if(value_path == "mpls1-bos")
    {
        mpls1_bos = value;
    }
    if(value_path == "mpls1-exp")
    {
        mpls1_exp = value;
    }
    if(value_path == "mpls1-label")
    {
        mpls1_label = value;
    }
    if(value_path == "mpls2-bos")
    {
        mpls2_bos = value;
    }
    if(value_path == "mpls2-exp")
    {
        mpls2_exp = value;
    }
    if(value_path == "mpls2-label")
    {
        mpls2_label = value;
    }
    if(value_path == "multi-flow-match")
    {
        multi_flow_match = value;
    }
    if(value_path == "outer-vlan-dei")
    {
        outer_vlan_dei = value;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
    }
    if(value_path == "outer-vlan-user-pri")
    {
        outer_vlan_user_pri = value;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped = value;
    }
    if(value_path == "pbb-bvid")
    {
        pbb_bvid = value;
    }
    if(value_path == "pbb-dei")
    {
        pbb_dei = value;
    }
    if(value_path == "pbb-pcp")
    {
        pbb_pcp = value;
    }
    if(value_path == "pbb-sid")
    {
        pbb_sid = value;
    }
    if(value_path == "pkt-type")
    {
        pkt_type = value;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl = value;
    }
    if(value_path == "pkts-data")
    {
        pkts_data = value;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped = value;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in = value;
    }
    if(value_path == "plain-bits")
    {
        plain_bits = value;
    }
    if(value_path == "plain-bits-size")
    {
        plain_bits_size = value;
    }
    if(value_path == "psci")
    {
        psci = value;
    }
    if(value_path == "tag-num")
    {
        tag_num = value;
    }
    if(value_path == "tci")
    {
        tci = value;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
    }
    if(value_path == "vlan-dei")
    {
        vlan_dei = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
    if(value_path == "vlan-pcp")
    {
        vlan_pcp = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::Es200Flow()
    :
    rx_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow>())
	,tx_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow>())
{
    rx_flow->parent = this;
    children["rx-flow"] = rx_flow.get();

    tx_flow->parent = this;
    children["tx-flow"] = tx_flow.get();

    yang_name = "es200-flow"; yang_parent_name = "sw-flow";
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::~Es200Flow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::has_data() const
{
    return (rx_flow !=  nullptr && rx_flow->has_data())
	|| (tx_flow !=  nullptr && tx_flow->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::has_operation() const
{
    return is_set(operation)
	|| (rx_flow !=  nullptr && rx_flow->has_operation())
	|| (tx_flow !=  nullptr && tx_flow->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-flow";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-flow")
    {
        if(rx_flow != nullptr)
        {
            children["rx-flow"] = rx_flow.get();
        }
        else
        {
            rx_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow>();
            rx_flow->parent = this;
            children["rx-flow"] = rx_flow.get();
        }
        return children.at("rx-flow");
    }

    if(child_yang_name == "tx-flow")
    {
        if(tx_flow != nullptr)
        {
            children["tx-flow"] = tx_flow.get();
        }
        else
        {
            tx_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow>();
            tx_flow->parent = this;
            children["tx-flow"] = tx_flow.get();
        }
        return children.at("tx-flow");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::get_children()
{
    if(children.find("rx-flow") == children.end())
    {
        if(rx_flow != nullptr)
        {
            children["rx-flow"] = rx_flow.get();
        }
    }

    if(children.find("tx-flow") == children.end())
    {
        if(tx_flow != nullptr)
        {
            children["tx-flow"] = tx_flow.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::SwFlow()
    :
    	flow_id{YType::int32, "flow-id"},
	 hw_type{YType::uint8, "hw-type"}
    	,
    es200_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow>())
	,msfpga_flow(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow>())
{
    es200_flow->parent = this;
    children["es200-flow"] = es200_flow.get();

    msfpga_flow->parent = this;
    children["msfpga-flow"] = msfpga_flow.get();

    yang_name = "sw-flow"; yang_parent_name = "sw-flow-s";
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::~SwFlow()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::has_data() const
{
    return flow_id.is_set
	|| hw_type.is_set
	|| (es200_flow !=  nullptr && es200_flow->has_data())
	|| (msfpga_flow !=  nullptr && msfpga_flow->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_id.operation)
	|| is_set(hw_type.operation)
	|| (es200_flow !=  nullptr && es200_flow->has_operation())
	|| (msfpga_flow !=  nullptr && msfpga_flow->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-flow" <<"[flow-id='" <<flow_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_id.is_set || is_set(flow_id.operation)) leaf_name_data.push_back(flow_id.get_name_leafdata());
    if (hw_type.is_set || is_set(hw_type.operation)) leaf_name_data.push_back(hw_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es200-flow")
    {
        if(es200_flow != nullptr)
        {
            children["es200-flow"] = es200_flow.get();
        }
        else
        {
            es200_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow>();
            es200_flow->parent = this;
            children["es200-flow"] = es200_flow.get();
        }
        return children.at("es200-flow");
    }

    if(child_yang_name == "msfpga-flow")
    {
        if(msfpga_flow != nullptr)
        {
            children["msfpga-flow"] = msfpga_flow.get();
        }
        else
        {
            msfpga_flow = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow>();
            msfpga_flow->parent = this;
            children["msfpga-flow"] = msfpga_flow.get();
        }
        return children.at("msfpga-flow");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::get_children()
{
    if(children.find("es200-flow") == children.end())
    {
        if(es200_flow != nullptr)
        {
            children["es200-flow"] = es200_flow.get();
        }
    }

    if(children.find("msfpga-flow") == children.end())
    {
        if(msfpga_flow != nullptr)
        {
            children["msfpga-flow"] = msfpga_flow.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-id")
    {
        flow_id = value;
    }
    if(value_path == "hw-type")
    {
        hw_type = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlowS()
{
    yang_name = "sw-flow-s"; yang_parent_name = "interface";
}

Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::~SwFlowS()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::has_data() const
{
    for (std::size_t index=0; index<sw_flow.size(); index++)
    {
        if(sw_flow[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::has_operation() const
{
    for (std::size_t index=0; index<sw_flow.size(); index++)
    {
        if(sw_flow[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-flow-s";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sw-flow")
    {
        for(auto const & c : sw_flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow>();
        c->parent = this;
        sw_flow.push_back(std::move(c));
        children[segment_path] = sw_flow.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::get_children()
{
    for (auto const & c : sw_flow)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats::TxSaStats()
    :
    	out_octets_encrypted{YType::uint64, "out-octets-encrypted"},
	 out_octets_protected{YType::uint64, "out-octets-protected"},
	 out_pkts_encrypted{YType::uint64, "out-pkts-encrypted"},
	 out_pkts_protected{YType::uint64, "out-pkts-protected"}
{
    yang_name = "tx-sa-stats"; yang_parent_name = "msfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats::~TxSaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats::has_data() const
{
    return out_octets_encrypted.is_set
	|| out_octets_protected.is_set
	|| out_pkts_encrypted.is_set
	|| out_pkts_protected.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(out_octets_encrypted.operation)
	|| is_set(out_octets_protected.operation)
	|| is_set(out_pkts_encrypted.operation)
	|| is_set(out_pkts_protected.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_octets_encrypted.is_set || is_set(out_octets_encrypted.operation)) leaf_name_data.push_back(out_octets_encrypted.get_name_leafdata());
    if (out_octets_protected.is_set || is_set(out_octets_protected.operation)) leaf_name_data.push_back(out_octets_protected.get_name_leafdata());
    if (out_pkts_encrypted.is_set || is_set(out_pkts_encrypted.operation)) leaf_name_data.push_back(out_pkts_encrypted.get_name_leafdata());
    if (out_pkts_protected.is_set || is_set(out_pkts_protected.operation)) leaf_name_data.push_back(out_pkts_protected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted = value;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected = value;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted = value;
    }
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats::RxSaStats()
    :
    	in_octets_decrypted{YType::uint64, "in-octets-decrypted"},
	 in_octets_validated{YType::uint64, "in-octets-validated"},
	 in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
	 in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
	 in_pkts_late{YType::uint64, "in-pkts-late"},
	 in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
	 in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
	 in_pkts_ok{YType::uint64, "in-pkts-ok"},
	 in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
	 in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"}
{
    yang_name = "rx-sa-stats"; yang_parent_name = "msfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats::~RxSaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats::has_data() const
{
    return in_octets_decrypted.is_set
	|| in_octets_validated.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_late.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_unchecked.is_set
	|| in_pkts_unused_sa.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_octets_decrypted.operation)
	|| is_set(in_octets_validated.operation)
	|| is_set(in_pkts_delayed.operation)
	|| is_set(in_pkts_invalid.operation)
	|| is_set(in_pkts_late.operation)
	|| is_set(in_pkts_not_using_sa.operation)
	|| is_set(in_pkts_not_valid.operation)
	|| is_set(in_pkts_ok.operation)
	|| is_set(in_pkts_unchecked.operation)
	|| is_set(in_pkts_unused_sa.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_octets_decrypted.is_set || is_set(in_octets_decrypted.operation)) leaf_name_data.push_back(in_octets_decrypted.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.operation)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.operation)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.operation)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.operation)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.operation)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.operation)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.operation)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.operation)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.operation)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted = value;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats::TxInterfaceMacsecStats()
    :
    	out_pkt_too_long{YType::uint64, "out-pkt-too-long"},
	 out_pkt_uncontrolled{YType::uint64, "out-pkt-uncontrolled"},
	 out_pkt_untagged{YType::uint64, "out-pkt-untagged"}
{
    yang_name = "tx-interface-macsec-stats"; yang_parent_name = "msfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats::~TxInterfaceMacsecStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats::has_data() const
{
    return out_pkt_too_long.is_set
	|| out_pkt_uncontrolled.is_set
	|| out_pkt_untagged.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats::has_operation() const
{
    return is_set(operation)
	|| is_set(out_pkt_too_long.operation)
	|| is_set(out_pkt_uncontrolled.operation)
	|| is_set(out_pkt_untagged.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-interface-macsec-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkt_too_long.is_set || is_set(out_pkt_too_long.operation)) leaf_name_data.push_back(out_pkt_too_long.get_name_leafdata());
    if (out_pkt_uncontrolled.is_set || is_set(out_pkt_uncontrolled.operation)) leaf_name_data.push_back(out_pkt_uncontrolled.get_name_leafdata());
    if (out_pkt_untagged.is_set || is_set(out_pkt_untagged.operation)) leaf_name_data.push_back(out_pkt_untagged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-pkt-too-long")
    {
        out_pkt_too_long = value;
    }
    if(value_path == "out-pkt-uncontrolled")
    {
        out_pkt_uncontrolled = value;
    }
    if(value_path == "out-pkt-untagged")
    {
        out_pkt_untagged = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats::RxInterfaceMacsecStats()
    :
    	in_pkt_bad_tag{YType::uint64, "in-pkt-bad-tag"},
	 in_pkt_no_sci{YType::uint64, "in-pkt-no-sci"},
	 in_pkt_notag{YType::uint64, "in-pkt-notag"},
	 in_pkt_overrun{YType::uint64, "in-pkt-overrun"},
	 in_pkt_tagged{YType::uint64, "in-pkt-tagged"},
	 in_pkt_uncontrolled{YType::uint64, "in-pkt-uncontrolled"},
	 in_pkt_unknown_sci{YType::uint64, "in-pkt-unknown-sci"},
	 in_pkt_untagged{YType::uint64, "in-pkt-untagged"}
{
    yang_name = "rx-interface-macsec-stats"; yang_parent_name = "msfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats::~RxInterfaceMacsecStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats::has_data() const
{
    return in_pkt_bad_tag.is_set
	|| in_pkt_no_sci.is_set
	|| in_pkt_notag.is_set
	|| in_pkt_overrun.is_set
	|| in_pkt_tagged.is_set
	|| in_pkt_uncontrolled.is_set
	|| in_pkt_unknown_sci.is_set
	|| in_pkt_untagged.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_pkt_bad_tag.operation)
	|| is_set(in_pkt_no_sci.operation)
	|| is_set(in_pkt_notag.operation)
	|| is_set(in_pkt_overrun.operation)
	|| is_set(in_pkt_tagged.operation)
	|| is_set(in_pkt_uncontrolled.operation)
	|| is_set(in_pkt_unknown_sci.operation)
	|| is_set(in_pkt_untagged.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-interface-macsec-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_bad_tag.is_set || is_set(in_pkt_bad_tag.operation)) leaf_name_data.push_back(in_pkt_bad_tag.get_name_leafdata());
    if (in_pkt_no_sci.is_set || is_set(in_pkt_no_sci.operation)) leaf_name_data.push_back(in_pkt_no_sci.get_name_leafdata());
    if (in_pkt_notag.is_set || is_set(in_pkt_notag.operation)) leaf_name_data.push_back(in_pkt_notag.get_name_leafdata());
    if (in_pkt_overrun.is_set || is_set(in_pkt_overrun.operation)) leaf_name_data.push_back(in_pkt_overrun.get_name_leafdata());
    if (in_pkt_tagged.is_set || is_set(in_pkt_tagged.operation)) leaf_name_data.push_back(in_pkt_tagged.get_name_leafdata());
    if (in_pkt_uncontrolled.is_set || is_set(in_pkt_uncontrolled.operation)) leaf_name_data.push_back(in_pkt_uncontrolled.get_name_leafdata());
    if (in_pkt_unknown_sci.is_set || is_set(in_pkt_unknown_sci.operation)) leaf_name_data.push_back(in_pkt_unknown_sci.get_name_leafdata());
    if (in_pkt_untagged.is_set || is_set(in_pkt_untagged.operation)) leaf_name_data.push_back(in_pkt_untagged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag = value;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci = value;
    }
    if(value_path == "in-pkt-notag")
    {
        in_pkt_notag = value;
    }
    if(value_path == "in-pkt-overrun")
    {
        in_pkt_overrun = value;
    }
    if(value_path == "in-pkt-tagged")
    {
        in_pkt_tagged = value;
    }
    if(value_path == "in-pkt-uncontrolled")
    {
        in_pkt_uncontrolled = value;
    }
    if(value_path == "in-pkt-unknown-sci")
    {
        in_pkt_unknown_sci = value;
    }
    if(value_path == "in-pkt-untagged")
    {
        in_pkt_untagged = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::MsfpgaStats()
    :
    rx_interface_macsec_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats>())
	,rx_sa_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats>())
	,tx_interface_macsec_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats>())
	,tx_sa_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats>())
{
    rx_interface_macsec_stats->parent = this;
    children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();

    rx_sa_stats->parent = this;
    children["rx-sa-stats"] = rx_sa_stats.get();

    tx_interface_macsec_stats->parent = this;
    children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();

    tx_sa_stats->parent = this;
    children["tx-sa-stats"] = tx_sa_stats.get();

    yang_name = "msfpga-stats"; yang_parent_name = "sw-statistics";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::~MsfpgaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::has_data() const
{
    return (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_data())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_data())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_data())
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::has_operation() const
{
    return is_set(operation)
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_operation())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_operation())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_operation())
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-interface-macsec-stats")
    {
        if(rx_interface_macsec_stats != nullptr)
        {
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
        else
        {
            rx_interface_macsec_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats>();
            rx_interface_macsec_stats->parent = this;
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
        return children.at("rx-interface-macsec-stats");
    }

    if(child_yang_name == "rx-sa-stats")
    {
        if(rx_sa_stats != nullptr)
        {
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
        else
        {
            rx_sa_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats>();
            rx_sa_stats->parent = this;
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
        return children.at("rx-sa-stats");
    }

    if(child_yang_name == "tx-interface-macsec-stats")
    {
        if(tx_interface_macsec_stats != nullptr)
        {
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
        else
        {
            tx_interface_macsec_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats>();
            tx_interface_macsec_stats->parent = this;
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
        return children.at("tx-interface-macsec-stats");
    }

    if(child_yang_name == "tx-sa-stats")
    {
        if(tx_sa_stats != nullptr)
        {
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
        else
        {
            tx_sa_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats>();
            tx_sa_stats->parent = this;
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
        return children.at("tx-sa-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::get_children()
{
    if(children.find("rx-interface-macsec-stats") == children.end())
    {
        if(rx_interface_macsec_stats != nullptr)
        {
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
    }

    if(children.find("rx-sa-stats") == children.end())
    {
        if(rx_sa_stats != nullptr)
        {
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
    }

    if(children.find("tx-interface-macsec-stats") == children.end())
    {
        if(tx_interface_macsec_stats != nullptr)
        {
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
    }

    if(children.find("tx-sa-stats") == children.end())
    {
        if(tx_sa_stats != nullptr)
        {
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats::MacsecTxStats()
    :
    	current_an{YType::uint64, "current-an"},
	 sa_encrypted_pkts{YType::uint64, "sa-encrypted-pkts"},
	 sc_encrypted_octets{YType::uint64, "sc-encrypted-octets"},
	 sc_encrypted_pkts{YType::uint64, "sc-encrypted-pkts"},
	 sc_overrun_pkts{YType::uint64, "sc-overrun-pkts"},
	 sc_toolong_pkts{YType::uint64, "sc-toolong-pkts"},
	 sc_untagged_pkts{YType::uint64, "sc-untagged-pkts"}
{
    yang_name = "macsec-tx-stats"; yang_parent_name = "xlfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats::~MacsecTxStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats::has_data() const
{
    return current_an.is_set
	|| sa_encrypted_pkts.is_set
	|| sc_encrypted_octets.is_set
	|| sc_encrypted_pkts.is_set
	|| sc_overrun_pkts.is_set
	|| sc_toolong_pkts.is_set
	|| sc_untagged_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats::has_operation() const
{
    return is_set(operation)
	|| is_set(current_an.operation)
	|| is_set(sa_encrypted_pkts.operation)
	|| is_set(sc_encrypted_octets.operation)
	|| is_set(sc_encrypted_pkts.operation)
	|| is_set(sc_overrun_pkts.operation)
	|| is_set(sc_toolong_pkts.operation)
	|| is_set(sc_untagged_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-tx-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_an.is_set || is_set(current_an.operation)) leaf_name_data.push_back(current_an.get_name_leafdata());
    if (sa_encrypted_pkts.is_set || is_set(sa_encrypted_pkts.operation)) leaf_name_data.push_back(sa_encrypted_pkts.get_name_leafdata());
    if (sc_encrypted_octets.is_set || is_set(sc_encrypted_octets.operation)) leaf_name_data.push_back(sc_encrypted_octets.get_name_leafdata());
    if (sc_encrypted_pkts.is_set || is_set(sc_encrypted_pkts.operation)) leaf_name_data.push_back(sc_encrypted_pkts.get_name_leafdata());
    if (sc_overrun_pkts.is_set || is_set(sc_overrun_pkts.operation)) leaf_name_data.push_back(sc_overrun_pkts.get_name_leafdata());
    if (sc_toolong_pkts.is_set || is_set(sc_toolong_pkts.operation)) leaf_name_data.push_back(sc_toolong_pkts.get_name_leafdata());
    if (sc_untagged_pkts.is_set || is_set(sc_untagged_pkts.operation)) leaf_name_data.push_back(sc_untagged_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-an")
    {
        current_an = value;
    }
    if(value_path == "sa-encrypted-pkts")
    {
        sa_encrypted_pkts = value;
    }
    if(value_path == "sc-encrypted-octets")
    {
        sc_encrypted_octets = value;
    }
    if(value_path == "sc-encrypted-pkts")
    {
        sc_encrypted_pkts = value;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts = value;
    }
    if(value_path == "sc-toolong-pkts")
    {
        sc_toolong_pkts = value;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::RxSaStat()
    :
    	an{YType::uint64, "an"},
	 sa_invalid_pkts{YType::uint64, "sa-invalid-pkts"},
	 sa_not_using_pkts{YType::uint64, "sa-not-using-pkts"},
	 sa_not_valid_pkts{YType::uint64, "sa-not-valid-pkts"},
	 sa_ok_pkts{YType::uint64, "sa-ok-pkts"},
	 sa_unused_pkts{YType::uint64, "sa-unused-pkts"}
{
    yang_name = "rx-sa-stat"; yang_parent_name = "macsec-rx-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::~RxSaStat()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::has_data() const
{
    return an.is_set
	|| sa_invalid_pkts.is_set
	|| sa_not_using_pkts.is_set
	|| sa_not_valid_pkts.is_set
	|| sa_ok_pkts.is_set
	|| sa_unused_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::has_operation() const
{
    return is_set(operation)
	|| is_set(an.operation)
	|| is_set(sa_invalid_pkts.operation)
	|| is_set(sa_not_using_pkts.operation)
	|| is_set(sa_not_valid_pkts.operation)
	|| is_set(sa_ok_pkts.operation)
	|| is_set(sa_unused_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stat";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (an.is_set || is_set(an.operation)) leaf_name_data.push_back(an.get_name_leafdata());
    if (sa_invalid_pkts.is_set || is_set(sa_invalid_pkts.operation)) leaf_name_data.push_back(sa_invalid_pkts.get_name_leafdata());
    if (sa_not_using_pkts.is_set || is_set(sa_not_using_pkts.operation)) leaf_name_data.push_back(sa_not_using_pkts.get_name_leafdata());
    if (sa_not_valid_pkts.is_set || is_set(sa_not_valid_pkts.operation)) leaf_name_data.push_back(sa_not_valid_pkts.get_name_leafdata());
    if (sa_ok_pkts.is_set || is_set(sa_ok_pkts.operation)) leaf_name_data.push_back(sa_ok_pkts.get_name_leafdata());
    if (sa_unused_pkts.is_set || is_set(sa_unused_pkts.operation)) leaf_name_data.push_back(sa_unused_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "an")
    {
        an = value;
    }
    if(value_path == "sa-invalid-pkts")
    {
        sa_invalid_pkts = value;
    }
    if(value_path == "sa-not-using-pkts")
    {
        sa_not_using_pkts = value;
    }
    if(value_path == "sa-not-valid-pkts")
    {
        sa_not_valid_pkts = value;
    }
    if(value_path == "sa-ok-pkts")
    {
        sa_ok_pkts = value;
    }
    if(value_path == "sa-unused-pkts")
    {
        sa_unused_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::MacsecRxStats()
    :
    	sc_bad_tag_pkts{YType::uint64, "sc-bad-tag-pkts"},
	 sc_decrypted_octets{YType::uint64, "sc-decrypted-octets"},
	 sc_delayed_pkts{YType::uint64, "sc-delayed-pkts"},
	 sc_invalid_pkts{YType::uint64, "sc-invalid-pkts"},
	 sc_late_pkts{YType::uint64, "sc-late-pkts"},
	 sc_no_sci_pkts{YType::uint64, "sc-no-sci-pkts"},
	 sc_no_tag_pkts{YType::uint64, "sc-no-tag-pkts"},
	 sc_not_using_pkts{YType::uint64, "sc-not-using-pkts"},
	 sc_not_valid_pkts{YType::uint64, "sc-not-valid-pkts"},
	 sc_ok_pkts{YType::uint64, "sc-ok-pkts"},
	 sc_overrun_pkts{YType::uint64, "sc-overrun-pkts"},
	 sc_unchecked_pkts{YType::uint64, "sc-unchecked-pkts"},
	 sc_unknown_sci_pkts{YType::uint64, "sc-unknown-sci-pkts"},
	 sc_untagged_pkts{YType::uint64, "sc-untagged-pkts"},
	 sc_unused_pkts{YType::uint64, "sc-unused-pkts"}
{
    yang_name = "macsec-rx-stats"; yang_parent_name = "xlfpga-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::~MacsecRxStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::has_data() const
{
    for (std::size_t index=0; index<rx_sa_stat.size(); index++)
    {
        if(rx_sa_stat[index]->has_data())
            return true;
    }
    return sc_bad_tag_pkts.is_set
	|| sc_decrypted_octets.is_set
	|| sc_delayed_pkts.is_set
	|| sc_invalid_pkts.is_set
	|| sc_late_pkts.is_set
	|| sc_no_sci_pkts.is_set
	|| sc_no_tag_pkts.is_set
	|| sc_not_using_pkts.is_set
	|| sc_not_valid_pkts.is_set
	|| sc_ok_pkts.is_set
	|| sc_overrun_pkts.is_set
	|| sc_unchecked_pkts.is_set
	|| sc_unknown_sci_pkts.is_set
	|| sc_untagged_pkts.is_set
	|| sc_unused_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::has_operation() const
{
    for (std::size_t index=0; index<rx_sa_stat.size(); index++)
    {
        if(rx_sa_stat[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(sc_bad_tag_pkts.operation)
	|| is_set(sc_decrypted_octets.operation)
	|| is_set(sc_delayed_pkts.operation)
	|| is_set(sc_invalid_pkts.operation)
	|| is_set(sc_late_pkts.operation)
	|| is_set(sc_no_sci_pkts.operation)
	|| is_set(sc_no_tag_pkts.operation)
	|| is_set(sc_not_using_pkts.operation)
	|| is_set(sc_not_valid_pkts.operation)
	|| is_set(sc_ok_pkts.operation)
	|| is_set(sc_overrun_pkts.operation)
	|| is_set(sc_unchecked_pkts.operation)
	|| is_set(sc_unknown_sci_pkts.operation)
	|| is_set(sc_untagged_pkts.operation)
	|| is_set(sc_unused_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-rx-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sc_bad_tag_pkts.is_set || is_set(sc_bad_tag_pkts.operation)) leaf_name_data.push_back(sc_bad_tag_pkts.get_name_leafdata());
    if (sc_decrypted_octets.is_set || is_set(sc_decrypted_octets.operation)) leaf_name_data.push_back(sc_decrypted_octets.get_name_leafdata());
    if (sc_delayed_pkts.is_set || is_set(sc_delayed_pkts.operation)) leaf_name_data.push_back(sc_delayed_pkts.get_name_leafdata());
    if (sc_invalid_pkts.is_set || is_set(sc_invalid_pkts.operation)) leaf_name_data.push_back(sc_invalid_pkts.get_name_leafdata());
    if (sc_late_pkts.is_set || is_set(sc_late_pkts.operation)) leaf_name_data.push_back(sc_late_pkts.get_name_leafdata());
    if (sc_no_sci_pkts.is_set || is_set(sc_no_sci_pkts.operation)) leaf_name_data.push_back(sc_no_sci_pkts.get_name_leafdata());
    if (sc_no_tag_pkts.is_set || is_set(sc_no_tag_pkts.operation)) leaf_name_data.push_back(sc_no_tag_pkts.get_name_leafdata());
    if (sc_not_using_pkts.is_set || is_set(sc_not_using_pkts.operation)) leaf_name_data.push_back(sc_not_using_pkts.get_name_leafdata());
    if (sc_not_valid_pkts.is_set || is_set(sc_not_valid_pkts.operation)) leaf_name_data.push_back(sc_not_valid_pkts.get_name_leafdata());
    if (sc_ok_pkts.is_set || is_set(sc_ok_pkts.operation)) leaf_name_data.push_back(sc_ok_pkts.get_name_leafdata());
    if (sc_overrun_pkts.is_set || is_set(sc_overrun_pkts.operation)) leaf_name_data.push_back(sc_overrun_pkts.get_name_leafdata());
    if (sc_unchecked_pkts.is_set || is_set(sc_unchecked_pkts.operation)) leaf_name_data.push_back(sc_unchecked_pkts.get_name_leafdata());
    if (sc_unknown_sci_pkts.is_set || is_set(sc_unknown_sci_pkts.operation)) leaf_name_data.push_back(sc_unknown_sci_pkts.get_name_leafdata());
    if (sc_untagged_pkts.is_set || is_set(sc_untagged_pkts.operation)) leaf_name_data.push_back(sc_untagged_pkts.get_name_leafdata());
    if (sc_unused_pkts.is_set || is_set(sc_unused_pkts.operation)) leaf_name_data.push_back(sc_unused_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-sa-stat")
    {
        for(auto const & c : rx_sa_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat>();
        c->parent = this;
        rx_sa_stat.push_back(std::move(c));
        children[segment_path] = rx_sa_stat.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::get_children()
{
    for (auto const & c : rx_sa_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sc-bad-tag-pkts")
    {
        sc_bad_tag_pkts = value;
    }
    if(value_path == "sc-decrypted-octets")
    {
        sc_decrypted_octets = value;
    }
    if(value_path == "sc-delayed-pkts")
    {
        sc_delayed_pkts = value;
    }
    if(value_path == "sc-invalid-pkts")
    {
        sc_invalid_pkts = value;
    }
    if(value_path == "sc-late-pkts")
    {
        sc_late_pkts = value;
    }
    if(value_path == "sc-no-sci-pkts")
    {
        sc_no_sci_pkts = value;
    }
    if(value_path == "sc-no-tag-pkts")
    {
        sc_no_tag_pkts = value;
    }
    if(value_path == "sc-not-using-pkts")
    {
        sc_not_using_pkts = value;
    }
    if(value_path == "sc-not-valid-pkts")
    {
        sc_not_valid_pkts = value;
    }
    if(value_path == "sc-ok-pkts")
    {
        sc_ok_pkts = value;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts = value;
    }
    if(value_path == "sc-unchecked-pkts")
    {
        sc_unchecked_pkts = value;
    }
    if(value_path == "sc-unknown-sci-pkts")
    {
        sc_unknown_sci_pkts = value;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts = value;
    }
    if(value_path == "sc-unused-pkts")
    {
        sc_unused_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::XlfpgaStats()
    :
    macsec_rx_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats>())
	,macsec_tx_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats>())
{
    macsec_rx_stats->parent = this;
    children["macsec-rx-stats"] = macsec_rx_stats.get();

    macsec_tx_stats->parent = this;
    children["macsec-tx-stats"] = macsec_tx_stats.get();

    yang_name = "xlfpga-stats"; yang_parent_name = "sw-statistics";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::~XlfpgaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::has_data() const
{
    return (macsec_rx_stats !=  nullptr && macsec_rx_stats->has_data())
	|| (macsec_tx_stats !=  nullptr && macsec_tx_stats->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::has_operation() const
{
    return is_set(operation)
	|| (macsec_rx_stats !=  nullptr && macsec_rx_stats->has_operation())
	|| (macsec_tx_stats !=  nullptr && macsec_tx_stats->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xlfpga-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "macsec-rx-stats")
    {
        if(macsec_rx_stats != nullptr)
        {
            children["macsec-rx-stats"] = macsec_rx_stats.get();
        }
        else
        {
            macsec_rx_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats>();
            macsec_rx_stats->parent = this;
            children["macsec-rx-stats"] = macsec_rx_stats.get();
        }
        return children.at("macsec-rx-stats");
    }

    if(child_yang_name == "macsec-tx-stats")
    {
        if(macsec_tx_stats != nullptr)
        {
            children["macsec-tx-stats"] = macsec_tx_stats.get();
        }
        else
        {
            macsec_tx_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats>();
            macsec_tx_stats->parent = this;
            children["macsec-tx-stats"] = macsec_tx_stats.get();
        }
        return children.at("macsec-tx-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::get_children()
{
    if(children.find("macsec-rx-stats") == children.end())
    {
        if(macsec_rx_stats != nullptr)
        {
            children["macsec-rx-stats"] = macsec_rx_stats.get();
        }
    }

    if(children.find("macsec-tx-stats") == children.end())
    {
        if(macsec_tx_stats != nullptr)
        {
            children["macsec-tx-stats"] = macsec_tx_stats.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats::TxSaStats()
    :
    	out_octets_encrypted_protected1{YType::uint64, "out-octets-encrypted-protected1"},
	 out_octets_encrypted_protected2{YType::uint64, "out-octets-encrypted-protected2"},
	 out_pkts_encrypted_protected{YType::uint64, "out-pkts-encrypted-protected"},
	 out_pkts_sa_not_in_use{YType::uint64, "out-pkts-sa-not-in-use"},
	 out_pkts_too_long{YType::uint64, "out-pkts-too-long"}
{
    yang_name = "tx-sa-stats"; yang_parent_name = "es200-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats::~TxSaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats::has_data() const
{
    return out_octets_encrypted_protected1.is_set
	|| out_octets_encrypted_protected2.is_set
	|| out_pkts_encrypted_protected.is_set
	|| out_pkts_sa_not_in_use.is_set
	|| out_pkts_too_long.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(out_octets_encrypted_protected1.operation)
	|| is_set(out_octets_encrypted_protected2.operation)
	|| is_set(out_pkts_encrypted_protected.operation)
	|| is_set(out_pkts_sa_not_in_use.operation)
	|| is_set(out_pkts_too_long.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_octets_encrypted_protected1.is_set || is_set(out_octets_encrypted_protected1.operation)) leaf_name_data.push_back(out_octets_encrypted_protected1.get_name_leafdata());
    if (out_octets_encrypted_protected2.is_set || is_set(out_octets_encrypted_protected2.operation)) leaf_name_data.push_back(out_octets_encrypted_protected2.get_name_leafdata());
    if (out_pkts_encrypted_protected.is_set || is_set(out_pkts_encrypted_protected.operation)) leaf_name_data.push_back(out_pkts_encrypted_protected.get_name_leafdata());
    if (out_pkts_sa_not_in_use.is_set || is_set(out_pkts_sa_not_in_use.operation)) leaf_name_data.push_back(out_pkts_sa_not_in_use.get_name_leafdata());
    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.operation)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1 = value;
    }
    if(value_path == "out-octets-encrypted-protected2")
    {
        out_octets_encrypted_protected2 = value;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected = value;
    }
    if(value_path == "out-pkts-sa-not-in-use")
    {
        out_pkts_sa_not_in_use = value;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats::RxSaStats()
    :
    	in_octets_decrypted_validated1{YType::uint64, "in-octets-decrypted-validated1"},
	 in_octets_decrypted_validated2{YType::uint64, "in-octets-decrypted-validated2"},
	 in_octets_validated{YType::uint64, "in-octets-validated"},
	 in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
	 in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
	 in_pkts_late{YType::uint64, "in-pkts-late"},
	 in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
	 in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
	 in_pkts_ok{YType::uint64, "in-pkts-ok"},
	 in_pkts_sa_not_in_use{YType::uint64, "in-pkts-sa-not-in-use"},
	 in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
	 in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"}
{
    yang_name = "rx-sa-stats"; yang_parent_name = "es200-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats::~RxSaStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats::has_data() const
{
    return in_octets_decrypted_validated1.is_set
	|| in_octets_decrypted_validated2.is_set
	|| in_octets_validated.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_late.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_sa_not_in_use.is_set
	|| in_pkts_unchecked.is_set
	|| in_pkts_unused_sa.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_octets_decrypted_validated1.operation)
	|| is_set(in_octets_decrypted_validated2.operation)
	|| is_set(in_octets_validated.operation)
	|| is_set(in_pkts_delayed.operation)
	|| is_set(in_pkts_invalid.operation)
	|| is_set(in_pkts_late.operation)
	|| is_set(in_pkts_not_using_sa.operation)
	|| is_set(in_pkts_not_valid.operation)
	|| is_set(in_pkts_ok.operation)
	|| is_set(in_pkts_sa_not_in_use.operation)
	|| is_set(in_pkts_unchecked.operation)
	|| is_set(in_pkts_unused_sa.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_octets_decrypted_validated1.is_set || is_set(in_octets_decrypted_validated1.operation)) leaf_name_data.push_back(in_octets_decrypted_validated1.get_name_leafdata());
    if (in_octets_decrypted_validated2.is_set || is_set(in_octets_decrypted_validated2.operation)) leaf_name_data.push_back(in_octets_decrypted_validated2.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.operation)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.operation)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.operation)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.operation)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.operation)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.operation)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.operation)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_sa_not_in_use.is_set || is_set(in_pkts_sa_not_in_use.operation)) leaf_name_data.push_back(in_pkts_sa_not_in_use.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.operation)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.operation)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1 = value;
    }
    if(value_path == "in-octets-decrypted-validated2")
    {
        in_octets_decrypted_validated2 = value;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
    }
    if(value_path == "in-pkts-sa-not-in-use")
    {
        in_pkts_sa_not_in_use = value;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats::TxInterfaceMacsecStats()
    :
    	out_bcast_pkts_ctrl{YType::uint64, "out-bcast-pkts-ctrl"},
	 out_bcast_pkts_unctrl{YType::uint64, "out-bcast-pkts-unctrl"},
	 out_drop_pkts_class{YType::uint64, "out-drop-pkts-class"},
	 out_drop_pkts_data{YType::uint64, "out-drop-pkts-data"},
	 out_mcast_pkts_ctrl{YType::uint64, "out-mcast-pkts-ctrl"},
	 out_mcast_pkts_unctrl{YType::uint64, "out-mcast-pkts-unctrl"},
	 out_octets_common{YType::uint64, "out-octets-common"},
	 out_octets_ctrl{YType::uint64, "out-octets-ctrl"},
	 out_octets_unctrl{YType::uint64, "out-octets-unctrl"},
	 out_pkt_ctrl{YType::uint64, "out-pkt-ctrl"},
	 out_pkts_untagged{YType::uint64, "out-pkts-untagged"},
	 out_rx_drop_pkts_ctrl{YType::uint64, "out-rx-drop-pkts-ctrl"},
	 out_rx_drop_pkts_unctrl{YType::uint64, "out-rx-drop-pkts-unctrl"},
	 out_rx_err_pkts_ctrl{YType::uint64, "out-rx-err-pkts-ctrl"},
	 out_rx_err_pkts_unctrl{YType::uint64, "out-rx-err-pkts-unctrl"},
	 out_ucast_pkts_ctrl{YType::uint64, "out-ucast-pkts-ctrl"},
	 out_ucast_pkts_unctrl{YType::uint64, "out-ucast-pkts-unctrl"},
	 transform_error_pkts{YType::uint64, "transform-error-pkts"}
{
    yang_name = "tx-interface-macsec-stats"; yang_parent_name = "es200-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats::~TxInterfaceMacsecStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats::has_data() const
{
    return out_bcast_pkts_ctrl.is_set
	|| out_bcast_pkts_unctrl.is_set
	|| out_drop_pkts_class.is_set
	|| out_drop_pkts_data.is_set
	|| out_mcast_pkts_ctrl.is_set
	|| out_mcast_pkts_unctrl.is_set
	|| out_octets_common.is_set
	|| out_octets_ctrl.is_set
	|| out_octets_unctrl.is_set
	|| out_pkt_ctrl.is_set
	|| out_pkts_untagged.is_set
	|| out_rx_drop_pkts_ctrl.is_set
	|| out_rx_drop_pkts_unctrl.is_set
	|| out_rx_err_pkts_ctrl.is_set
	|| out_rx_err_pkts_unctrl.is_set
	|| out_ucast_pkts_ctrl.is_set
	|| out_ucast_pkts_unctrl.is_set
	|| transform_error_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats::has_operation() const
{
    return is_set(operation)
	|| is_set(out_bcast_pkts_ctrl.operation)
	|| is_set(out_bcast_pkts_unctrl.operation)
	|| is_set(out_drop_pkts_class.operation)
	|| is_set(out_drop_pkts_data.operation)
	|| is_set(out_mcast_pkts_ctrl.operation)
	|| is_set(out_mcast_pkts_unctrl.operation)
	|| is_set(out_octets_common.operation)
	|| is_set(out_octets_ctrl.operation)
	|| is_set(out_octets_unctrl.operation)
	|| is_set(out_pkt_ctrl.operation)
	|| is_set(out_pkts_untagged.operation)
	|| is_set(out_rx_drop_pkts_ctrl.operation)
	|| is_set(out_rx_drop_pkts_unctrl.operation)
	|| is_set(out_rx_err_pkts_ctrl.operation)
	|| is_set(out_rx_err_pkts_unctrl.operation)
	|| is_set(out_ucast_pkts_ctrl.operation)
	|| is_set(out_ucast_pkts_unctrl.operation)
	|| is_set(transform_error_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-interface-macsec-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_bcast_pkts_ctrl.is_set || is_set(out_bcast_pkts_ctrl.operation)) leaf_name_data.push_back(out_bcast_pkts_ctrl.get_name_leafdata());
    if (out_bcast_pkts_unctrl.is_set || is_set(out_bcast_pkts_unctrl.operation)) leaf_name_data.push_back(out_bcast_pkts_unctrl.get_name_leafdata());
    if (out_drop_pkts_class.is_set || is_set(out_drop_pkts_class.operation)) leaf_name_data.push_back(out_drop_pkts_class.get_name_leafdata());
    if (out_drop_pkts_data.is_set || is_set(out_drop_pkts_data.operation)) leaf_name_data.push_back(out_drop_pkts_data.get_name_leafdata());
    if (out_mcast_pkts_ctrl.is_set || is_set(out_mcast_pkts_ctrl.operation)) leaf_name_data.push_back(out_mcast_pkts_ctrl.get_name_leafdata());
    if (out_mcast_pkts_unctrl.is_set || is_set(out_mcast_pkts_unctrl.operation)) leaf_name_data.push_back(out_mcast_pkts_unctrl.get_name_leafdata());
    if (out_octets_common.is_set || is_set(out_octets_common.operation)) leaf_name_data.push_back(out_octets_common.get_name_leafdata());
    if (out_octets_ctrl.is_set || is_set(out_octets_ctrl.operation)) leaf_name_data.push_back(out_octets_ctrl.get_name_leafdata());
    if (out_octets_unctrl.is_set || is_set(out_octets_unctrl.operation)) leaf_name_data.push_back(out_octets_unctrl.get_name_leafdata());
    if (out_pkt_ctrl.is_set || is_set(out_pkt_ctrl.operation)) leaf_name_data.push_back(out_pkt_ctrl.get_name_leafdata());
    if (out_pkts_untagged.is_set || is_set(out_pkts_untagged.operation)) leaf_name_data.push_back(out_pkts_untagged.get_name_leafdata());
    if (out_rx_drop_pkts_ctrl.is_set || is_set(out_rx_drop_pkts_ctrl.operation)) leaf_name_data.push_back(out_rx_drop_pkts_ctrl.get_name_leafdata());
    if (out_rx_drop_pkts_unctrl.is_set || is_set(out_rx_drop_pkts_unctrl.operation)) leaf_name_data.push_back(out_rx_drop_pkts_unctrl.get_name_leafdata());
    if (out_rx_err_pkts_ctrl.is_set || is_set(out_rx_err_pkts_ctrl.operation)) leaf_name_data.push_back(out_rx_err_pkts_ctrl.get_name_leafdata());
    if (out_rx_err_pkts_unctrl.is_set || is_set(out_rx_err_pkts_unctrl.operation)) leaf_name_data.push_back(out_rx_err_pkts_unctrl.get_name_leafdata());
    if (out_ucast_pkts_ctrl.is_set || is_set(out_ucast_pkts_ctrl.operation)) leaf_name_data.push_back(out_ucast_pkts_ctrl.get_name_leafdata());
    if (out_ucast_pkts_unctrl.is_set || is_set(out_ucast_pkts_unctrl.operation)) leaf_name_data.push_back(out_ucast_pkts_unctrl.get_name_leafdata());
    if (transform_error_pkts.is_set || is_set(transform_error_pkts.operation)) leaf_name_data.push_back(transform_error_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-bcast-pkts-ctrl")
    {
        out_bcast_pkts_ctrl = value;
    }
    if(value_path == "out-bcast-pkts-unctrl")
    {
        out_bcast_pkts_unctrl = value;
    }
    if(value_path == "out-drop-pkts-class")
    {
        out_drop_pkts_class = value;
    }
    if(value_path == "out-drop-pkts-data")
    {
        out_drop_pkts_data = value;
    }
    if(value_path == "out-mcast-pkts-ctrl")
    {
        out_mcast_pkts_ctrl = value;
    }
    if(value_path == "out-mcast-pkts-unctrl")
    {
        out_mcast_pkts_unctrl = value;
    }
    if(value_path == "out-octets-common")
    {
        out_octets_common = value;
    }
    if(value_path == "out-octets-ctrl")
    {
        out_octets_ctrl = value;
    }
    if(value_path == "out-octets-unctrl")
    {
        out_octets_unctrl = value;
    }
    if(value_path == "out-pkt-ctrl")
    {
        out_pkt_ctrl = value;
    }
    if(value_path == "out-pkts-untagged")
    {
        out_pkts_untagged = value;
    }
    if(value_path == "out-rx-drop-pkts-ctrl")
    {
        out_rx_drop_pkts_ctrl = value;
    }
    if(value_path == "out-rx-drop-pkts-unctrl")
    {
        out_rx_drop_pkts_unctrl = value;
    }
    if(value_path == "out-rx-err-pkts-ctrl")
    {
        out_rx_err_pkts_ctrl = value;
    }
    if(value_path == "out-rx-err-pkts-unctrl")
    {
        out_rx_err_pkts_unctrl = value;
    }
    if(value_path == "out-ucast-pkts-ctrl")
    {
        out_ucast_pkts_ctrl = value;
    }
    if(value_path == "out-ucast-pkts-unctrl")
    {
        out_ucast_pkts_unctrl = value;
    }
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats::RxInterfaceMacsecStats()
    :
    	in_bcast_pkts_ctrl{YType::uint64, "in-bcast-pkts-ctrl"},
	 in_bcast_pkts_unctrl{YType::uint64, "in-bcast-pkts-unctrl"},
	 in_drop_pkts_class{YType::uint64, "in-drop-pkts-class"},
	 in_drop_pkts_data{YType::uint64, "in-drop-pkts-data"},
	 in_mcast_pkts_ctrl{YType::uint64, "in-mcast-pkts-ctrl"},
	 in_mcast_pkts_unctrl{YType::uint64, "in-mcast-pkts-unctrl"},
	 in_octets_ctrl{YType::uint64, "in-octets-ctrl"},
	 in_octets_unctrl{YType::uint64, "in-octets-unctrl"},
	 in_pkt_bad_tag{YType::uint64, "in-pkt-bad-tag"},
	 in_pkt_ctrl{YType::uint64, "in-pkt-ctrl"},
	 in_pkt_no_sci{YType::uint64, "in-pkt-no-sci"},
	 in_pkt_no_tag{YType::uint64, "in-pkt-no-tag"},
	 in_pkts_tagged_ctrl{YType::uint64, "in-pkts-tagged-ctrl"},
	 in_pkts_unknown_sci{YType::uint64, "in-pkts-unknown-sci"},
	 in_pkts_untagged{YType::uint64, "in-pkts-untagged"},
	 in_rx_drop_pkts_ctrl{YType::uint64, "in-rx-drop-pkts-ctrl"},
	 in_rx_drop_pkts_unctrl{YType::uint64, "in-rx-drop-pkts-unctrl"},
	 in_rx_error_pkts_ctrl{YType::uint64, "in-rx-error-pkts-ctrl"},
	 in_rx_error_pkts_unctrl{YType::uint64, "in-rx-error-pkts-unctrl"},
	 in_ucast_pkts_ctrl{YType::uint64, "in-ucast-pkts-ctrl"},
	 in_ucast_pkts_unctrl{YType::uint64, "in-ucast-pkts-unctrl"},
	 transform_error_pkts{YType::uint64, "transform-error-pkts"}
{
    yang_name = "rx-interface-macsec-stats"; yang_parent_name = "es200-stats";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats::~RxInterfaceMacsecStats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats::has_data() const
{
    return in_bcast_pkts_ctrl.is_set
	|| in_bcast_pkts_unctrl.is_set
	|| in_drop_pkts_class.is_set
	|| in_drop_pkts_data.is_set
	|| in_mcast_pkts_ctrl.is_set
	|| in_mcast_pkts_unctrl.is_set
	|| in_octets_ctrl.is_set
	|| in_octets_unctrl.is_set
	|| in_pkt_bad_tag.is_set
	|| in_pkt_ctrl.is_set
	|| in_pkt_no_sci.is_set
	|| in_pkt_no_tag.is_set
	|| in_pkts_tagged_ctrl.is_set
	|| in_pkts_unknown_sci.is_set
	|| in_pkts_untagged.is_set
	|| in_rx_drop_pkts_ctrl.is_set
	|| in_rx_drop_pkts_unctrl.is_set
	|| in_rx_error_pkts_ctrl.is_set
	|| in_rx_error_pkts_unctrl.is_set
	|| in_ucast_pkts_ctrl.is_set
	|| in_ucast_pkts_unctrl.is_set
	|| transform_error_pkts.is_set;
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_bcast_pkts_ctrl.operation)
	|| is_set(in_bcast_pkts_unctrl.operation)
	|| is_set(in_drop_pkts_class.operation)
	|| is_set(in_drop_pkts_data.operation)
	|| is_set(in_mcast_pkts_ctrl.operation)
	|| is_set(in_mcast_pkts_unctrl.operation)
	|| is_set(in_octets_ctrl.operation)
	|| is_set(in_octets_unctrl.operation)
	|| is_set(in_pkt_bad_tag.operation)
	|| is_set(in_pkt_ctrl.operation)
	|| is_set(in_pkt_no_sci.operation)
	|| is_set(in_pkt_no_tag.operation)
	|| is_set(in_pkts_tagged_ctrl.operation)
	|| is_set(in_pkts_unknown_sci.operation)
	|| is_set(in_pkts_untagged.operation)
	|| is_set(in_rx_drop_pkts_ctrl.operation)
	|| is_set(in_rx_drop_pkts_unctrl.operation)
	|| is_set(in_rx_error_pkts_ctrl.operation)
	|| is_set(in_rx_error_pkts_unctrl.operation)
	|| is_set(in_ucast_pkts_ctrl.operation)
	|| is_set(in_ucast_pkts_unctrl.operation)
	|| is_set(transform_error_pkts.operation);
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-interface-macsec-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_bcast_pkts_ctrl.is_set || is_set(in_bcast_pkts_ctrl.operation)) leaf_name_data.push_back(in_bcast_pkts_ctrl.get_name_leafdata());
    if (in_bcast_pkts_unctrl.is_set || is_set(in_bcast_pkts_unctrl.operation)) leaf_name_data.push_back(in_bcast_pkts_unctrl.get_name_leafdata());
    if (in_drop_pkts_class.is_set || is_set(in_drop_pkts_class.operation)) leaf_name_data.push_back(in_drop_pkts_class.get_name_leafdata());
    if (in_drop_pkts_data.is_set || is_set(in_drop_pkts_data.operation)) leaf_name_data.push_back(in_drop_pkts_data.get_name_leafdata());
    if (in_mcast_pkts_ctrl.is_set || is_set(in_mcast_pkts_ctrl.operation)) leaf_name_data.push_back(in_mcast_pkts_ctrl.get_name_leafdata());
    if (in_mcast_pkts_unctrl.is_set || is_set(in_mcast_pkts_unctrl.operation)) leaf_name_data.push_back(in_mcast_pkts_unctrl.get_name_leafdata());
    if (in_octets_ctrl.is_set || is_set(in_octets_ctrl.operation)) leaf_name_data.push_back(in_octets_ctrl.get_name_leafdata());
    if (in_octets_unctrl.is_set || is_set(in_octets_unctrl.operation)) leaf_name_data.push_back(in_octets_unctrl.get_name_leafdata());
    if (in_pkt_bad_tag.is_set || is_set(in_pkt_bad_tag.operation)) leaf_name_data.push_back(in_pkt_bad_tag.get_name_leafdata());
    if (in_pkt_ctrl.is_set || is_set(in_pkt_ctrl.operation)) leaf_name_data.push_back(in_pkt_ctrl.get_name_leafdata());
    if (in_pkt_no_sci.is_set || is_set(in_pkt_no_sci.operation)) leaf_name_data.push_back(in_pkt_no_sci.get_name_leafdata());
    if (in_pkt_no_tag.is_set || is_set(in_pkt_no_tag.operation)) leaf_name_data.push_back(in_pkt_no_tag.get_name_leafdata());
    if (in_pkts_tagged_ctrl.is_set || is_set(in_pkts_tagged_ctrl.operation)) leaf_name_data.push_back(in_pkts_tagged_ctrl.get_name_leafdata());
    if (in_pkts_unknown_sci.is_set || is_set(in_pkts_unknown_sci.operation)) leaf_name_data.push_back(in_pkts_unknown_sci.get_name_leafdata());
    if (in_pkts_untagged.is_set || is_set(in_pkts_untagged.operation)) leaf_name_data.push_back(in_pkts_untagged.get_name_leafdata());
    if (in_rx_drop_pkts_ctrl.is_set || is_set(in_rx_drop_pkts_ctrl.operation)) leaf_name_data.push_back(in_rx_drop_pkts_ctrl.get_name_leafdata());
    if (in_rx_drop_pkts_unctrl.is_set || is_set(in_rx_drop_pkts_unctrl.operation)) leaf_name_data.push_back(in_rx_drop_pkts_unctrl.get_name_leafdata());
    if (in_rx_error_pkts_ctrl.is_set || is_set(in_rx_error_pkts_ctrl.operation)) leaf_name_data.push_back(in_rx_error_pkts_ctrl.get_name_leafdata());
    if (in_rx_error_pkts_unctrl.is_set || is_set(in_rx_error_pkts_unctrl.operation)) leaf_name_data.push_back(in_rx_error_pkts_unctrl.get_name_leafdata());
    if (in_ucast_pkts_ctrl.is_set || is_set(in_ucast_pkts_ctrl.operation)) leaf_name_data.push_back(in_ucast_pkts_ctrl.get_name_leafdata());
    if (in_ucast_pkts_unctrl.is_set || is_set(in_ucast_pkts_unctrl.operation)) leaf_name_data.push_back(in_ucast_pkts_unctrl.get_name_leafdata());
    if (transform_error_pkts.is_set || is_set(transform_error_pkts.operation)) leaf_name_data.push_back(transform_error_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats::get_children()
{
    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-bcast-pkts-ctrl")
    {
        in_bcast_pkts_ctrl = value;
    }
    if(value_path == "in-bcast-pkts-unctrl")
    {
        in_bcast_pkts_unctrl = value;
    }
    if(value_path == "in-drop-pkts-class")
    {
        in_drop_pkts_class = value;
    }
    if(value_path == "in-drop-pkts-data")
    {
        in_drop_pkts_data = value;
    }
    if(value_path == "in-mcast-pkts-ctrl")
    {
        in_mcast_pkts_ctrl = value;
    }
    if(value_path == "in-mcast-pkts-unctrl")
    {
        in_mcast_pkts_unctrl = value;
    }
    if(value_path == "in-octets-ctrl")
    {
        in_octets_ctrl = value;
    }
    if(value_path == "in-octets-unctrl")
    {
        in_octets_unctrl = value;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag = value;
    }
    if(value_path == "in-pkt-ctrl")
    {
        in_pkt_ctrl = value;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci = value;
    }
    if(value_path == "in-pkt-no-tag")
    {
        in_pkt_no_tag = value;
    }
    if(value_path == "in-pkts-tagged-ctrl")
    {
        in_pkts_tagged_ctrl = value;
    }
    if(value_path == "in-pkts-unknown-sci")
    {
        in_pkts_unknown_sci = value;
    }
    if(value_path == "in-pkts-untagged")
    {
        in_pkts_untagged = value;
    }
    if(value_path == "in-rx-drop-pkts-ctrl")
    {
        in_rx_drop_pkts_ctrl = value;
    }
    if(value_path == "in-rx-drop-pkts-unctrl")
    {
        in_rx_drop_pkts_unctrl = value;
    }
    if(value_path == "in-rx-error-pkts-ctrl")
    {
        in_rx_error_pkts_ctrl = value;
    }
    if(value_path == "in-rx-error-pkts-unctrl")
    {
        in_rx_error_pkts_unctrl = value;
    }
    if(value_path == "in-ucast-pkts-ctrl")
    {
        in_ucast_pkts_ctrl = value;
    }
    if(value_path == "in-ucast-pkts-unctrl")
    {
        in_ucast_pkts_unctrl = value;
    }
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::Es200Stats()
    :
    rx_interface_macsec_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats>())
	,rx_sa_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats>())
	,tx_interface_macsec_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats>())
	,tx_sa_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats>())
{
    rx_interface_macsec_stats->parent = this;
    children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();

    rx_sa_stats->parent = this;
    children["rx-sa-stats"] = rx_sa_stats.get();

    tx_interface_macsec_stats->parent = this;
    children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();

    tx_sa_stats->parent = this;
    children["tx-sa-stats"] = tx_sa_stats.get();

    yang_name = "es200-stats"; yang_parent_name = "sw-statistics";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::~Es200Stats()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::has_data() const
{
    return (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_data())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_data())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_data())
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::has_operation() const
{
    return is_set(operation)
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_operation())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_operation())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_operation())
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-stats";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-interface-macsec-stats")
    {
        if(rx_interface_macsec_stats != nullptr)
        {
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
        else
        {
            rx_interface_macsec_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats>();
            rx_interface_macsec_stats->parent = this;
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
        return children.at("rx-interface-macsec-stats");
    }

    if(child_yang_name == "rx-sa-stats")
    {
        if(rx_sa_stats != nullptr)
        {
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
        else
        {
            rx_sa_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats>();
            rx_sa_stats->parent = this;
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
        return children.at("rx-sa-stats");
    }

    if(child_yang_name == "tx-interface-macsec-stats")
    {
        if(tx_interface_macsec_stats != nullptr)
        {
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
        else
        {
            tx_interface_macsec_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats>();
            tx_interface_macsec_stats->parent = this;
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
        return children.at("tx-interface-macsec-stats");
    }

    if(child_yang_name == "tx-sa-stats")
    {
        if(tx_sa_stats != nullptr)
        {
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
        else
        {
            tx_sa_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats>();
            tx_sa_stats->parent = this;
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
        return children.at("tx-sa-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::get_children()
{
    if(children.find("rx-interface-macsec-stats") == children.end())
    {
        if(rx_interface_macsec_stats != nullptr)
        {
            children["rx-interface-macsec-stats"] = rx_interface_macsec_stats.get();
        }
    }

    if(children.find("rx-sa-stats") == children.end())
    {
        if(rx_sa_stats != nullptr)
        {
            children["rx-sa-stats"] = rx_sa_stats.get();
        }
    }

    if(children.find("tx-interface-macsec-stats") == children.end())
    {
        if(tx_interface_macsec_stats != nullptr)
        {
            children["tx-interface-macsec-stats"] = tx_interface_macsec_stats.get();
        }
    }

    if(children.find("tx-sa-stats") == children.end())
    {
        if(tx_sa_stats != nullptr)
        {
            children["tx-sa-stats"] = tx_sa_stats.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::SwStatistics()
    :
    	hw_type{YType::uint8, "hw-type"}
    	,
    es200_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats>())
	,msfpga_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats>())
	,xlfpga_stats(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats>())
{
    es200_stats->parent = this;
    children["es200-stats"] = es200_stats.get();

    msfpga_stats->parent = this;
    children["msfpga-stats"] = msfpga_stats.get();

    xlfpga_stats->parent = this;
    children["xlfpga-stats"] = xlfpga_stats.get();

    yang_name = "sw-statistics"; yang_parent_name = "interface";
}

Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::~SwStatistics()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::has_data() const
{
    return hw_type.is_set
	|| (es200_stats !=  nullptr && es200_stats->has_data())
	|| (msfpga_stats !=  nullptr && msfpga_stats->has_data())
	|| (xlfpga_stats !=  nullptr && xlfpga_stats->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(hw_type.operation)
	|| (es200_stats !=  nullptr && es200_stats->has_operation())
	|| (msfpga_stats !=  nullptr && msfpga_stats->has_operation())
	|| (xlfpga_stats !=  nullptr && xlfpga_stats->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-statistics";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_type.is_set || is_set(hw_type.operation)) leaf_name_data.push_back(hw_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es200-stats")
    {
        if(es200_stats != nullptr)
        {
            children["es200-stats"] = es200_stats.get();
        }
        else
        {
            es200_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats>();
            es200_stats->parent = this;
            children["es200-stats"] = es200_stats.get();
        }
        return children.at("es200-stats");
    }

    if(child_yang_name == "msfpga-stats")
    {
        if(msfpga_stats != nullptr)
        {
            children["msfpga-stats"] = msfpga_stats.get();
        }
        else
        {
            msfpga_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats>();
            msfpga_stats->parent = this;
            children["msfpga-stats"] = msfpga_stats.get();
        }
        return children.at("msfpga-stats");
    }

    if(child_yang_name == "xlfpga-stats")
    {
        if(xlfpga_stats != nullptr)
        {
            children["xlfpga-stats"] = xlfpga_stats.get();
        }
        else
        {
            xlfpga_stats = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats>();
            xlfpga_stats->parent = this;
            children["xlfpga-stats"] = xlfpga_stats.get();
        }
        return children.at("xlfpga-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::get_children()
{
    if(children.find("es200-stats") == children.end())
    {
        if(es200_stats != nullptr)
        {
            children["es200-stats"] = es200_stats.get();
        }
    }

    if(children.find("msfpga-stats") == children.end())
    {
        if(msfpga_stats != nullptr)
        {
            children["msfpga-stats"] = msfpga_stats.get();
        }
    }

    if(children.find("xlfpga-stats") == children.end())
    {
        if(xlfpga_stats != nullptr)
        {
            children["xlfpga-stats"] = xlfpga_stats.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hw-type")
    {
        hw_type = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interface::Interface()
    :
    	name{YType::str, "name"}
    	,
    hw_flow_s(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS>())
	,hw_sas(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas>())
	,hw_statistics(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics>())
	,sw_flow_s(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS>())
	,sw_sas(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas>())
	,sw_statistics(std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics>())
{
    hw_flow_s->parent = this;
    children["hw-flow-s"] = hw_flow_s.get();

    hw_sas->parent = this;
    children["hw-sas"] = hw_sas.get();

    hw_statistics->parent = this;
    children["hw-statistics"] = hw_statistics.get();

    sw_flow_s->parent = this;
    children["sw-flow-s"] = sw_flow_s.get();

    sw_sas->parent = this;
    children["sw-sas"] = sw_sas.get();

    sw_statistics->parent = this;
    children["sw-statistics"] = sw_statistics.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Macsec::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Macsec::Nodes::Node::Interfaces::Interface::has_data() const
{
    return name.is_set
	|| (hw_flow_s !=  nullptr && hw_flow_s->has_data())
	|| (hw_sas !=  nullptr && hw_sas->has_data())
	|| (hw_statistics !=  nullptr && hw_statistics->has_data())
	|| (sw_flow_s !=  nullptr && sw_flow_s->has_data())
	|| (sw_sas !=  nullptr && sw_sas->has_data())
	|| (sw_statistics !=  nullptr && sw_statistics->has_data());
}

bool Macsec::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (hw_flow_s !=  nullptr && hw_flow_s->has_operation())
	|| (hw_sas !=  nullptr && hw_sas->has_operation())
	|| (hw_statistics !=  nullptr && hw_statistics->has_operation())
	|| (sw_flow_s !=  nullptr && sw_flow_s->has_operation())
	|| (sw_sas !=  nullptr && sw_sas->has_operation())
	|| (sw_statistics !=  nullptr && sw_statistics->has_operation());
}

std::string Macsec::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hw-flow-s")
    {
        if(hw_flow_s != nullptr)
        {
            children["hw-flow-s"] = hw_flow_s.get();
        }
        else
        {
            hw_flow_s = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwFlowS>();
            hw_flow_s->parent = this;
            children["hw-flow-s"] = hw_flow_s.get();
        }
        return children.at("hw-flow-s");
    }

    if(child_yang_name == "hw-sas")
    {
        if(hw_sas != nullptr)
        {
            children["hw-sas"] = hw_sas.get();
        }
        else
        {
            hw_sas = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwSas>();
            hw_sas->parent = this;
            children["hw-sas"] = hw_sas.get();
        }
        return children.at("hw-sas");
    }

    if(child_yang_name == "hw-statistics")
    {
        if(hw_statistics != nullptr)
        {
            children["hw-statistics"] = hw_statistics.get();
        }
        else
        {
            hw_statistics = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::HwStatistics>();
            hw_statistics->parent = this;
            children["hw-statistics"] = hw_statistics.get();
        }
        return children.at("hw-statistics");
    }

    if(child_yang_name == "sw-flow-s")
    {
        if(sw_flow_s != nullptr)
        {
            children["sw-flow-s"] = sw_flow_s.get();
        }
        else
        {
            sw_flow_s = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwFlowS>();
            sw_flow_s->parent = this;
            children["sw-flow-s"] = sw_flow_s.get();
        }
        return children.at("sw-flow-s");
    }

    if(child_yang_name == "sw-sas")
    {
        if(sw_sas != nullptr)
        {
            children["sw-sas"] = sw_sas.get();
        }
        else
        {
            sw_sas = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwSas>();
            sw_sas->parent = this;
            children["sw-sas"] = sw_sas.get();
        }
        return children.at("sw-sas");
    }

    if(child_yang_name == "sw-statistics")
    {
        if(sw_statistics != nullptr)
        {
            children["sw-statistics"] = sw_statistics.get();
        }
        else
        {
            sw_statistics = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface::SwStatistics>();
            sw_statistics->parent = this;
            children["sw-statistics"] = sw_statistics.get();
        }
        return children.at("sw-statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::Interface::get_children()
{
    if(children.find("hw-flow-s") == children.end())
    {
        if(hw_flow_s != nullptr)
        {
            children["hw-flow-s"] = hw_flow_s.get();
        }
    }

    if(children.find("hw-sas") == children.end())
    {
        if(hw_sas != nullptr)
        {
            children["hw-sas"] = hw_sas.get();
        }
    }

    if(children.find("hw-statistics") == children.end())
    {
        if(hw_statistics != nullptr)
        {
            children["hw-statistics"] = hw_statistics.get();
        }
    }

    if(children.find("sw-flow-s") == children.end())
    {
        if(sw_flow_s != nullptr)
        {
            children["sw-flow-s"] = sw_flow_s.get();
        }
    }

    if(children.find("sw-sas") == children.end())
    {
        if(sw_sas != nullptr)
        {
            children["sw-sas"] = sw_sas.get();
        }
    }

    if(children.find("sw-statistics") == children.end())
    {
        if(sw_statistics != nullptr)
        {
            children["sw-statistics"] = sw_statistics.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Macsec::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

Macsec::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Macsec::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Macsec::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Macsec::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    interfaces(std::make_unique<Macsec::Nodes::Node::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Macsec::Nodes::Node::~Node()
{
}

bool Macsec::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Macsec::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Macsec::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-macsec-pl-oper:macsec/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Macsec::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::Node::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    return children;
}

void Macsec::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Macsec::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "macsec";
}

Macsec::Nodes::~Nodes()
{
}

bool Macsec::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Macsec::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Macsec::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-macsec-pl-oper:macsec/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Macsec::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Macsec::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Macsec()
    :
    nodes(std::make_unique<Macsec::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "macsec"; yang_parent_name = "Cisco-IOS-XR-crypto-macsec-pl-oper";
}

Macsec::~Macsec()
{
}

bool Macsec::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Macsec::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-pl-oper:macsec";

    return path_buffer.str();

}

EntityPath Macsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Macsec::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Macsec::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Macsec::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Macsec::clone_ptr()
{
    return std::make_unique<Macsec>();
}


}
}

